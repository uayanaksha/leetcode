class Solution {
public:
    int getAvg(int x, int y, vector<vector<int>>& img) {
        int sum = img[x][y];
        int d = 1;
        if (x - 1 >= 0) {
            sum += img[x - 1][y];
            ++d;
            if (y - 1 >= 0) {
                sum += img[x - 1][y - 1];
                ++d;
            }
            if (y + 1 < img[0].size()) {
                sum += img[x - 1][y + 1];
                ++d;
            }
        }
        if (x + 1 < img.size()) {
            sum += img[x + 1][y];
            ++d;
            if (y - 1 >= 0) {
                sum += img[x + 1][y - 1];
                ++d;
            }
            if (y + 1 < img[0].size()) {
                sum += img[x + 1][y + 1];
                ++d;
            }
        }
        if (y - 1 >= 0) {
            sum += img[x][y - 1];
            ++d;
        }
        if (y + 1 < img[0].size()) {
            sum += img[x][y + 1];
            ++d;
        }

        return sum / d;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> v(img.size(), vector<int>(img[0].size(), 0));
        for (int i{}; i < img.size(); ++i) {
            for (int j{}; j < img[0].size(); ++j) {
                v[i][j] = getAvg(i, j, img);
            }
        }
        return v;
    }
};
