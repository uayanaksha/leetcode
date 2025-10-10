class Solution {
public:
    int climbStairs(int n) {
      if(n < 2) return 1;
      int curr, a{1}, b{1};
      for(int i=2; i<=n; ++i){
        curr = a+b;
        a = b;
        b = curr;
      }
      return curr;
    }
};
