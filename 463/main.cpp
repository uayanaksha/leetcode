class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r = grid[0].size(), c = grid.size(), p{};
        for(int i{}; i<c; ++i){
            for(int j{}; j<r; ++j){
                if(grid[i][j] == 0) continue;
                if(j + 1 >= r || grid[i][j+1] == 0) p++;
                if(j - 1 < 0 || grid[i][j-1] == 0) p++;
                if(i + 1 >= c || grid[i+1][j] == 0) p++;
                if(i - 1 < 0 || grid[i-1][j] == 0) p++;
            }
        }
        return p;
    }
};
