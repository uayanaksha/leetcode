class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int maxim = 1 << 31;
        int sum = 0;
        int F = 0;
        for(int i{}; i<nums.size(); ++i){
            sum += nums[i];
            F += (nums[i] * i);
        }
        maxim = F;
        for(int i=1; i<nums.size(); ++i){
            F = F + sum - nums[nums.size()-i]*nums.size();
            if(F > maxim){
                maxim = F;
            }
        }
        return maxim;
    }
};
