class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> cp(heights.begin(), heights.end());
        sort(cp.begin(), cp.end());
        int ctr{};
        for (int i{}; i < cp.size(); ++i) {
            if (heights[i] != cp[i])
                ++ctr;
        }
        return ctr;
    }
};
