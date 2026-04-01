class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int maxim = 0;
        for(int i{}; i<nums.size(); ++i){
            if(nums[i] % 2) continue;
            maxim |= nums[i];
        }
        return maxim;
    }
};
