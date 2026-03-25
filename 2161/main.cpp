class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> v(n);
        int l = 0;
        int r = n-1;
        for(int i=0, j=r; i<n; ++i, --j){
            if(nums[i] < pivot){
                v[l++] = nums[i];
            }
            if(nums[j] > pivot){
                v[r--] = nums[j];
            }
        }
        while(l <= r){
            v[l++] = pivot;
        }
        return v;
    }
};
