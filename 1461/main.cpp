class Solution {
  public:
    bool hasAllCodes(string s, int k) {
      vector<bool> v(1 << k);
      if(k > s.size()) return false;
      long long val = 0;
      long long chk = (1<<k) - 1;
      int i{}, j{};
      while(j<k){
        val *= 2LL;
        if (s[j++] == '1') {
          val += 1LL;
        }
      }
      for (int i = 0, j = k; j <= s.size(); ++i, ++j) {
        val &= chk;
        v[val] = true;
        val *= 2LL;
        if (s[j] == '1') {
          val += 1LL;
        }
      }
      for (const auto& e : v) {
        if (!e) return false;
      }
      return true;
    }
};
