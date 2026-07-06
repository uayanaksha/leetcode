class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i{}; i<image.size(); ++i){
            int l = 0;
            int r = image[0].size() - 1;
            while(l <= r){
                int v = image[i][l] ^ 1;
                image[i][l++] = image[i][r] ^ 1;
                image[i][r--] = v;
            }
        }
        return image;
    }
};
