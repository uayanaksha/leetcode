class Solution {
private:
    int k;
    const int cmod = 1e9 + 7;
    vector<vector<int>> grid;
    vector<vector<vector<int>>> dp;
    using ll = long long;
    int computeMatrix(int row, int col, int mod) {
        if (row == grid.size() - 1 && col == grid[0].size() - 1)
            return (mod == 0);
        if (dp[row][col][mod] != -1)
            return dp[row][col][mod];
        ll ans = 0;
        if (row + 1 < grid.size()) {
            int newMod = (mod + grid[row + 1][col]) % k;
            ans = (ans + computeMatrix(row + 1, col, newMod)) % cmod;
        }
        if (col + 1 < grid[0].size()) {
            int newMod = (mod + grid[row][col + 1]) % k;
            ans = (ans + computeMatrix(row, col + 1, newMod)) % cmod;
        }
        return (dp[row][col][mod] = ans);
    }

public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        this->grid = grid;
        this->k = k;
        int n = grid.size(), m = grid[0].size();
        dp.resize(n, vector<vector<int>>(m, vector<int>(k, -1)));
        int ans = computeMatrix(0, 0, grid[0][0] % k);
        return ans;
    }
};
