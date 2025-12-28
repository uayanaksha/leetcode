class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = static_cast<int>(grid.size());
        int m = static_cast<int>(grid[0].size());
        int min_ptr{};
        if (grid[--n][--m] >= 0)
            return 0;
        int ctr=++m * ++n;
        for (int i = --n; i >= 0; --i) {
            while (min_ptr < m && grid[i][min_ptr] >= 0) {
                ++min_ptr;
            }
            ctr = ctr - min_ptr;
        }
        return ctr;
    }
};
