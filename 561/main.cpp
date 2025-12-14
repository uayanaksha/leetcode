class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum{};
        for(auto i{0uz}; i<nums.size(); i=i+2){ 
            sum += nums[i];
        }   return sum;
    }
};
