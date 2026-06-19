class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cmax = nums[0];
        int cmin = nums[0];
        int maxp = nums[0];
        for(int i=1; i<nums.size(); ++i){
            int tmp = cmin;
            cmin = min({
                nums[i], nums[i] * tmp, nums[i] * cmax
            });
            cmax = max({
                nums[i], nums[i] * tmp, nums[i] * cmax
            });
            maxp = max(maxp, cmax);
        }
        return maxp;
    }
};
