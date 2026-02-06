class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max_size{};
        int l{}, r{};
        for(;r<n; ++r){
            while(nums[r] > (long)k*nums[l]) ++l;
            max_size = max(max_size, r-l+1);
        }
        return n - max_size;
    }
};
