class Solution {
public:
    int binaryGap(int n) {
        if(__builtin_popcount(n) <= 1) return 0;
        int gap = 0;
        while(n && !(n&1)){
            n /= 2;
        }
        while(n){
            n/=2;
            int curr = 1;
            while(n && !(n&1)){
                ++curr;
                n /= 2;
            }
            gap = max(curr, gap);
        }
        return gap;
    }
};
