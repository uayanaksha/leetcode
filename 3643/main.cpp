class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=y; i<y+k; ++i){
            for(int j=0; j<k; ++j){
                int l = x + j;
                int r = x + k - j - 1;
                if(l>=r) break;
                int t = grid[l][i];
                grid[l][i] = grid[r][i];
                grid[r][i] = t;
            }
        }
        return grid;
    }
};
