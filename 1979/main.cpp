class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxim = 1<<31;
        int minim = ~maxim;
        for(int i{}; i<nums.size(); ++i){
            maxim = max(maxim, nums[i]);
            minim = min(minim, nums[i]);
        }
        return gcd(maxim, minim);
    }
};
