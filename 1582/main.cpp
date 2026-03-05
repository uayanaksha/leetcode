class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat.front().size();
        int ctr{};
        vector<int> h(m, 0);
        vector<int> v(n, 0);
        for(int i{}; i<m; ++i){
            for(int j{}; j<n; ++j){
                h[i] += mat[i][j];
                v[j] += mat[i][j];
            }
        }
        for(int i{}; i<m; ++i){
            for(int j{}; j<n; ++j){
                if(mat[i][j] == 0) continue;
                if(v[j] == 1 && h[i] == 1) ++ctr;
            }
        }
        return ctr;
    }
};
