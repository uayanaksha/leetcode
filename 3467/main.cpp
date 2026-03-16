class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        vector<int> ptrs = {0, n-1}, v(n);
        for(int i{}; i<n; ++i){
            int flag = nums[i] & 1;
            int ptr = ptrs[flag];
            v[ptr] = flag;
            ptrs[flag] += (flag ? -1 : 1);
        }
        return v;
    }
};
