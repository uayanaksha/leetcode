class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        sort(nums.begin(), nums.end(), less<int>());
        int maxim = 1;
        int curr = 1;
        for (int i = 1; i < nums.size(); ++i) {
            int diff = nums[i] - nums[i - 1];
            if (diff < 2) {
                maxim = max(maxim, curr += diff);
                continue;
            }
            curr = 1;
        }
        return maxim;
    }
};
