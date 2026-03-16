class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum{};
        int n = static_cast<int>(nums.size());
        for(int i{}; i<n; ++i){
            sum += nums[i];
            sum -= (++i == n ? 0 : nums[i]);
        }
        return sum;
    }
};
