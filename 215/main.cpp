class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> v(20001, 0);
        int maxim = -1e4;
        for(int i{}; i<nums.size(); ++i){
            v[nums[i] + 10000]++;
            maxim = max(maxim, nums[i] + 10000);
        }
        int i = maxim;
        int ctr = 0;
        for(; i>=0; --i){
            ctr += v[i];
            if(ctr >= k){
                return i - 10000;
            }
        }
        return i - 10000;
    }
};
