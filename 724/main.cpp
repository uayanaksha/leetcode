class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int curr = 0;
        for(int i{}; i<nums.size(); ++i){
            sum -= nums[i];
            if(curr == sum){
                return i;
            }
            curr += nums[i];
        }
        return -1;
    }
};
