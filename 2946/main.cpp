class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> v = mat;
        k = k % n;
        if (k == 0)
            return true;
        for (int j = 0; j < m; ++j) {
            for (int i1{}, i2=k; i1 < n; ++i1, ++i2) {
                i2 %= n;
                if(mat[j][i1] != mat[j][i2]){
                    return false;
                }
            }
        }
        return true;
    }
};
