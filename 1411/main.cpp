class Solution {
public:
    int numOfWays(int n) {
        long long MOD = 1e9 + 7;
        long long x = 6;
        long long y = 6;
        for(int i=2; i<=n; ++i){
            long long xi = (3*x + 2*y) % MOD; 
            long long yi = (2*x + 2*y) % MOD; 
            x = xi;
            y = yi;
        }
        long long r = (x + y) % MOD;
        return r;
    }
};
