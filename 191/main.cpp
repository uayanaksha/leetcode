class Solution {
public:
    int hammingWeight(int n) {
        int ctr{};
        while(n > 0){
          if(n&1){
            ++ctr;
          }
          n>>=1;
        }
        return ctr;
    }
};
