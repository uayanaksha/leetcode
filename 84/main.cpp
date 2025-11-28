class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        const int n = heights.size();
        int maxim = 0;
        vector<int> v;
        for (int i{}; i <= n; ++i) {
            int curr_len = i == n ? 0 : heights[i];
            while(!v.empty() && curr_len < heights[v.back()]) {
                int h = heights[v.back()];
                v.pop_back();
                int w = v.empty() ? i : i - v.back() - 1;
                maxim = max(maxim, h*w);

            }
            v.push_back(i);
        }
        return maxim;
    }
};
