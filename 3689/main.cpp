class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long sum = 0;
        int maxim = 1<<31;
        int minim = ~(1<<31);
        for(int i{}; i<nums.size(); ++i){
            maxim = max(maxim, nums[i]);
            minim = min(minim, nums[i]);
        }
        sum = (long long)k * (maxim - minim);
        return sum;
    }
};
