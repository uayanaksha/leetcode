class Solution {
public:
    int rotated = 0;
    int n = 0;
    bool isEqual(vector<vector<int>> mat, vector<vector<int>> target){
        for(int i{}; i<n; ++i){
            for(int j{}; j<n; ++j){
                if(mat[i][j] != target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    void rotate90(vector<vector<int>>& mat){
        vector<vector<int>> v(n, vector<int>(n));
        for(int i=n-1; i>=0; --i){
            for(int j{}; j<n; ++j){
                v[j][i] = mat[n-i-1][j];
            }
        }
        mat.swap(v);
        this->rotated++;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        this->n = mat.size();
        bool r = isEqual(mat, target);
        if(r || this->rotated >= 3) return r;
        rotate90(mat);
        return findRotation(mat, target);
    }
};
