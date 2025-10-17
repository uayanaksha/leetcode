class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ctr{};
        while(n>0){
          ctr += (n&1);
          n>>=1;
        }
        return ctr == 1;
    }
};
