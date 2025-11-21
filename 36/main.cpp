class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int n = 9;
        vector<vector<bool>> r(n, vector<bool>(n, false)), 
        c(n, vector<bool>(n, false)), b(n, vector<bool>(n, false));
        for(int x{};x<n; ++x){
            for(int y{}; y < n; ++y){
                if(board[x][y]=='.') continue;
                int a = board[x][y]-'1';
                int bIdx = (x/3)*3 + (y/3);
                if(r[x][a] || c[y][a] || b[bIdx][a]) return false;
                r[x][a] = c[y][a] = b[bIdx][a] = true;
            }
        }
        return true;
    }
};
