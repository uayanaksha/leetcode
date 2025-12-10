class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size(), r{};
        sort(nums.begin(), nums.end());
        for (int i{}, j{}; i < n; ++i) {
            while (nums[i] - nums[j] > 1) {
                j++;
            }
            if (nums[i] - nums[j] == 1) {
                r = max(r, i - j + 1);
            }
        }
        return r;
    }
};
