class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int> v(51, 0);
        for(int i{}; i<nums.size(); ++i){
            v[nums[i]]++;
        }
        int maxim = nums[0];
        int curr = nums[0];
        for(int i=1; i<nums.size(); ++i){
            if(nums[i] == nums[i-1]+1){
                curr += nums[i];
                maxim = max(maxim, curr);
            } else {
                break;
            }
        }
        while(maxim <= 50 && v[maxim] > 0){
            ++maxim;
        }
        return maxim;
    }
};
