class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        long n = static_cast<long>(complexity.size()), MOD = static_cast<long>(1e9 + 7), r = 1;
        for(long i=1; i<n; ++i){
            if(complexity[i] <= complexity[0]){
                return 0;
            }
            r = (r*i)%MOD;
        }
        return r;
    }
};
