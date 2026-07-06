class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        while(l < r){
            if(nums[l] % 2 == 0 && nums[r] % 2 == 1){
                l++;
                r--;
            } else if(nums[l] % 2 == 1){
                while(l < r && nums[r] % 2 != 0){
                    --r;
                }
                swap(nums[l], nums[r]);
            } else {
                while(l < r && nums[l] % 2 != 1){
                    ++l;
                }
                swap(nums[l], nums[r]);
            }
        }
        return nums;
    }
};
