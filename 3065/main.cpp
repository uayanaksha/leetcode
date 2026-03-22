class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ctr{};
        for(int i{}; i<nums.size(); ++i){
            if(nums[i] >= k) continue;
            ++ctr;
        }
        return ctr;
    }
};
