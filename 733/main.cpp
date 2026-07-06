class Solution {
public:
    void colorNeighbour(vector<vector<int>>& image, 
        int sr, int sc, deque<vector<int>>& v) {
        if (sr - 1 >= 0 && image[sr - 1][sc] == image[sr][sc]) {
            v.push_front({sr - 1, sc});
        }
        if (sr + 1 < image.size() && image[sr + 1][sc] == image[sr][sc]) {
            v.push_front({sr + 1, sc});
        }
        if (sc - 1 >= 0 && image[sr][sc - 1] == image[sr][sc]) {
            v.push_front({sr, sc - 1});
        }
        if (sr + 1 < image[0].size() && image[sr][sc + 1] == image[sr][sc]) {
            v.push_front({sr, sc + 1});
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        vector<vector<bool>> visited(image.size(), vector<bool>(image[0].size(), false));
        vector<vector<int>> r = image;
        deque<vector<int>> qu = {{sr, sc}};
        while (!qu.empty()) {
            vector<int> e = qu.back();
            if(!visited[e[0]][e[1]]){
                colorNeighbour(image, e[0], e[1], qu);
                r[e[0]][e[1]] = color;
                visited[e[0]][e[1]] = true;
            }
            qu.pop_back();
        }
        return r;
    }
};
