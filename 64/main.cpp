class Solution {
public:
    int fn(int x, int y, int R, int C, vector<vector<int>>& grid, vector<vector<int>>& mem){
        if(mem[x][y] >= 0) return mem[x][y];
        if(x == R && y == C){
            return mem[x][y] = grid[x][y];
        } else if(x == R){
            return mem[x][y] = grid[x][y] + fn(x, y+1, R, C, grid, mem);
        } else if(y == C){
            return mem[x][y] = grid[x][y] + fn(x+1, y, R, C, grid, mem);
        }
        int d = fn(x, y+1, R, C, grid, mem);
        int r = fn(x+1, y, R, C, grid, mem);
        return mem[x][y] = grid[x][y] + min(d, r);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        vector<vector<int>> mem(R, vector<int>(C, -1));
        return fn(0, 0, grid.size()-1, grid[0].size()-1, grid, mem);
    }
};
