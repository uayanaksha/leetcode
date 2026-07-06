class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        for(int i{}; i<m; ++i){
            for(int j{}; j<n; ++j){
                v[j][i] = matrix[i][j];
            }
        }
        return v;
    }
};
