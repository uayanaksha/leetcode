class Solution {
public:
    int reverseBits(int n) {
        long long r=0;
        for(int i{}; i<32; ++i){
            r *= 2;
            r |= (n&1);
            n /= 2;
        }
        return r;
    }
};
