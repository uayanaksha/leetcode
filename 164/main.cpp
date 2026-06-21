class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        int distance = 0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); ++i){
            distance = max(distance, nums[i] - nums[i-1]);
        }
        return distance;
    }
};
