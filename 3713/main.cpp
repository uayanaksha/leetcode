class Solution {
  public:
    int longestBalanced(string s) {
      int n = s.size();
      int res{};
      int k{};
      int maxim{};
      for(int i{}; i<n; ++i){
        k = 0;
        maxim = 0;
        vector<int> v(26, 0);
        for(int j=i; j<n; ++j){
          int c = s[j] - 'a';
          if(++v[c] == 1)++k;
          maxim = max(maxim, v[c]);
          int diff = j - i + 1;
          if(maxim * k == diff){
            res = max(res, diff);
          }
        }
      }
      return res;
    }
};
