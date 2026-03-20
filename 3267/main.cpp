class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        if(k == 0) return nums;
        int min_idx = 0;
        int n = nums.size();
        for(int i{}; i<n; ++i){
            if(nums[i] < nums[min_idx]){
                min_idx = i;
            }
        }
        nums[min_idx] *= multiplier;
        return getFinalState(nums, k-1, multiplier);
    }
};
