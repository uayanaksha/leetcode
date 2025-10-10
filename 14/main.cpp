class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n = strs.size();
      int glob_r=INT_MAX;
      for(int i=1; i<n; ++i){
        int r=0;
        int minSize = min(strs[i].size(), strs[i-1].size());
        while(strs[i][r] == strs[i-1][r] && r < minSize){
          r++;
        }
        if(r < glob_r){
          glob_r = r;
        }
        if(glob_r == 0){
          break;
        }
      }
      return strs[0].substr(0, glob_r);
    }
};
