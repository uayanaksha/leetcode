class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        vector<int> v(n, 0);
        for (int i{}; i < n; ++i) {
            if (nums[i] == 0) {
                continue;
            }
            int idx = ((i + nums[i]) % n + n )% n;
            v[i] = nums[idx];
        }
        return v;
    }
};
