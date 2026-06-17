class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int dist = 1 << 30;
        for(int i=start; i<nums.size(); ++i){
            if(nums[i] == target){
                dist = i - start;
                break;
            }
        }
        for(int i=start; i>=0; --i){
            if(nums[i] == target){
                dist = min(start - i, dist);
                break;
            }
        }
        return dist;
    }
};
