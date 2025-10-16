class Solution {
public:
    int titleToNumber(string columnTitle) {
      using ll = long long;
      int n = columnTitle.size();
      ll ctr = 0;
      for(int i{}; i<n; ++i){
        ctr = ctr*26 + (columnTitle[i] - '@');
      }
      return ctr;
    }
};
