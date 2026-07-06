class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxim = 1<<31;
        int minim = ~(1<<31);
        for(int i{}; i<nums.size(); ++i){
            maxim = max(maxim, nums[i]);
            minim = min(minim, nums[i]);
        }
        return max(maxim - minim - 2*k, 0);
    }
};
