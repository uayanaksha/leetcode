class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<>());
        int maxim = 1<<31;
        for(int i{}; i+1<nums.size(); ++i){
            maxim = max(maxim, (nums[i]-1)*(nums[i+1]-1));
        }
        return maxim;
    }
};
