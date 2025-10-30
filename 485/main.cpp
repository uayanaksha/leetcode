class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxim=0;
        for(int i{}, ctr{}; i<nums.size(); ++i){
            if(nums[i]){
                ++ctr;
                maxim = max(maxim, ctr);
            }   else ctr = 0;
        }
        return maxim;
    }
};
