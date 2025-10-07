class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l{0}, r=nums.size()-1;
        int mid = l + (r-l)/2;
        while(l<=r){
          mid = l + ((r-l)/2);
          if(target == nums[mid]){
            break;
          } else if(target<nums[mid]){
            r = mid-1;
          } else {
            l = mid + 1;
          }
        }
        while(mid < nums.size() && nums[mid] < target){
          mid++;
        }
        return mid;
    }
};
