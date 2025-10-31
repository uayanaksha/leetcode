class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> v;
        for (int j{n - 1}; j >= 0; --j) {
            vector<int> w;
            for (int i{n-1}; i >= 0; --i) {
                w.push_back(matrix[i][j]);
            }
            v.push_back(w);
        }
        matrix.swap(v);
        reverse(matrix.begin(), matrix.end());
    }
};
