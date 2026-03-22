class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        for(int i{}; i<n; ++i){
            int t = nums[i];
            int idx = index[i];
            for(int j=i; j>idx; --j){
                nums[j] = nums[j-1];
            }
            nums[idx] = t;
        }
        return nums;
    }
};
