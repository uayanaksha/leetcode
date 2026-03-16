class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        int ctr{};
        for(int i{}; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                if(nums[i] != nums[j]) continue;
                ++ctr;
            }
        }
        return ctr;
    }
};
