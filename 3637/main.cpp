class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = 0;
        int q = nums.size() - 1;
        while(p+1 < nums.size() && nums[p] <= nums[p+1]){
            if(nums[p] == nums[p+1]) return false;
            ++p;
        }
        if(p == nums.size() - 1) return false;
        while(q-1 >= p && nums[q-1] < nums[q]){
            if(nums[q] == nums[q-1]) return false;
            --q;
        }
        if(p == 0 || q == nums.size() - 1){
            return false;
        }
        while(p < q && nums[p] >= nums[p+1]){
            if(nums[p] == nums[p+1]) return false;
            ++p;
        }
        return p == q;
    }
};
