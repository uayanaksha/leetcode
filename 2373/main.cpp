class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        vector<vector<int>> v(R-2, vector<int>(C-2, 0));
        for(int i=1; i<R-1; ++i){
            for(int j=1; j<C-1; ++j){
                v[i-1][j-1] = max({
                    grid[i-1][j-1],
                    grid[i-1][j],
                    grid[i-1][j+1],
                    grid[i][j-1],
                    grid[i][j],
                    grid[i][j+1],
                    grid[i+1][j-1],
                    grid[i+1][j],
                    grid[i+1][j+1]
                });
            }
        }
        return v;
    }
};
