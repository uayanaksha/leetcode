class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int r = sum % 3;
        if (r == 0)
            return sum;
        sort(nums.begin(), nums.end());
        int s = r ^ 1 ^ 2, k = sum;
        vector<int> rm, sm;
        for (int it : nums) {
            if (it % 3 == r) {
                rm.push_back(it);
            } else if (it % 3 == s) {
                sm.push_back(it);
            }
        }
        if (rm.size() > 0) {
            k = min(k, rm.front());
        }
        if (sm.size() > 1) {
            k = min(k, sm[0] + sm[1]);
        }
        return sum - k;
    }
};
