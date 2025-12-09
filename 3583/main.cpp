class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int n = nums.size(), MOD = 1e9 + 7;
        vector<int> prev(1e5 + 1), ctr(1e5 + 1);
        int r{};
        for(auto &e: nums){
            if((e&1)==0){
                r = (r + prev[e/2]) % MOD;
            }
            if(e <= 5e4){
                prev[e] = (prev[e] + ctr[2*e]) % MOD;
            }
            ++ctr[e];
        }
        return r;
    }
};
