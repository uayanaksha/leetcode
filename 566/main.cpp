class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int R = mat.size();
        int C = mat[0].size();
        if((R == r && C == c) || (r*c != R*C)) return mat;
        vector<vector<int>> v(r, vector<int>(c, 0));
        for(int i{}; i<r; ++i){
            for(int j{}; j<c; ++j){
                int absIdx = (c*i) + j;
                v[i][j] = mat[absIdx/C][absIdx%C];
            }
        }
        return v;
    }
};
