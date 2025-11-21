class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l{}, r = nums.size() - 1, m, start = -1, end = -1;
        if (nums.size() == 0)
            return vector<int>{start, end};
        while (l <= r) {
            m = l + (r - l) / 2;
            if (target < nums[m]) {
                r = m - 1;
            } else if (target > nums[m]) {
                l = m + 1;
            } else {
                break;
            }
        }
        if (nums[m] == target) {
            start = m, end = m;
            while (start - 1 >= 0 && nums[start - 1] == nums[start]) {
                --start;
            }
            while (end + 1 < nums.size() && nums[end + 1] == nums[end]) {
                ++end;
            }
        }
        return vector<int>{start, end};
    }
};
