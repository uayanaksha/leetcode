class Solution {
public:
    using vi = vector<int>;
    int k{};
    const int MOD = 1e9 + 7;
    int fn(vi& nums, int ptr) {
        if (ptr == nums.size())
            return 1;
        int minIdx = ptr, maxIdx = ptr, ctr{};
        for (int i = ptr; i < nums.size(); ++i) {
            if (nums[i] < nums[minIdx]) { minIdx = i; }
            if (nums[i] > nums[maxIdx]) { maxIdx = i; }
            if (nums[maxIdx] - nums[minIdx] > k) continue;
            ctr += fn(nums, i + 1);
        }
        return ctr % MOD;
    }
    int countPartitions(vector<int>& nums, int k) {
        int n = nums.size();
        this->k = k;
        int r = fn(nums, 0);
        return r;
    }
};
