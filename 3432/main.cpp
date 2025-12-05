class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size(), l{}, r{}, ctr{};
        r = accumulate(nums.begin(), nums.end(), 0);
        for(int i{}; i<n-1; ++i){
            l += nums[i];
            r -= nums[i];
            if((l%2)!=(r%2)) {
                continue;
            }
            ++ctr;
        }
        return ctr;
    }
};
