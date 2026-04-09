class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int MOD = 1e9 + 7;
        for(auto &q: queries){
            int l = q[0], r = q[1], k = q[2], v = q[3];
            for(int idx = l; idx <= r; idx += k){
                nums[idx] = (nums[idx] * (long long)v) % MOD;
            }
        }
        int x = 0;
        for(int num: nums){
            x ^= num;
        }
        return x;
    }
};
