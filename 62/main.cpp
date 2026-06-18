class Solution {
public:
    int fn(int x, int y, int R, int C, vector<vector<int>>& mem){
        if(mem[x][y]) return mem[x][y];
        if(x == R && y == C){
            return mem[x][y] = 1;
        } else if(y == C){
            return mem[x][y] = fn(x+1, y, R, C, mem);
        } else if(x == R){
            return mem[x][y] = fn(x, y+1, R, C, mem);
        } 
        int r = fn(x+1, y, R, C, mem);
        int d = fn(x, y+1, R, C, mem);
        return mem[x][y] = r + d;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> mem(m, vector<int>(n, 0));
        fn(0, 0, m-1, n-1, mem);
        return mem[0][0];
    }
};
