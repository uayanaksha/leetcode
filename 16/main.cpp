class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int val = nums[0] + nums[1] + nums[2];
        for (int i{}; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1, k = nums.size() - 1; j < k;) {
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(target - sum) < abs(target - val)){
                    val = sum;
                }
                if (sum > target) {
                    --k;
                } else if (sum < target) {
                    j++;
                } else {
                    return target;
                }
            }
        }
        return val;
    }
};
