class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        int n = s.size();
        vector<int> memS(256, 0), memT(256, 0);
        for (int i{}; i < n; ++i) {
          if(memS[s[i]] != memT[t[i]]){
            return false;
          }
          memS[s[i]] = i+1;
          memT[t[i]] = i+1;
        }
        return true;
    }
};
