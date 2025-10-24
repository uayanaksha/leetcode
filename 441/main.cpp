class Solution {
public:
    int arrangeCoins(int n) {
        long ctr=sqrtl(n)*sqrtl(2);
        while(true){
            long p = ctr*(ctr+1)/2;
            if(p >= n) {
                n -= p;
                break;
            }
            ++ctr;
        }
        if(n == 0) ++ctr;
        return ctr-1;
    }
};
