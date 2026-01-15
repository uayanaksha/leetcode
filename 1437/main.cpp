class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        const int n = static_cast<int>(nums.size());
        auto ctr0{0uz}; auto l{0uz}; auto r{n - 1};
        while (l < nums.size() && !nums[l]) { ++l; }   
        ++l;
        while (l <= r && !nums[r]) { --r; }
        while (l < r) {
            while (l < r && !nums[l]) { ++l; ++ctr0; }
            if (ctr0 < k) {
                return false;
            }
            ctr0 = 0;
            ++l;
        }
        return true;
    }
};
