class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int min_ptr{}, ctr = m * n;
        if (grid[n - 1][m - 1] >= 0)
            return 0;
        for (int i = n - 1; i >= 0; --i) {
            while (min_ptr < m) {
                if (grid[i][min_ptr] < 0)
                    break;
                ++min_ptr;
            }
            ctr = ctr - min_ptr;
        }
        return ctr;
    }
};
