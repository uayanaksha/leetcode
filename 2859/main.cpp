class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum{};
        for(int i{}; i<n; ++i){
            if(__builtin_popcount(i) == k){
                sum += nums[i];
            }
        }
        return sum;
    }
};
