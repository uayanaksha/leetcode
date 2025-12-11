class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        vector<int> hmin(n+1, n+2), hmax(n+1, -1), vmin(n+1, n+2), vmax(n+1, -1);
        int r{};
        for(auto& b: buildings){
            int x = b[0], y = b[1];
            hmin[x] = min(hmin[x], y);
            hmax[x] = max(hmax[x], y);
            vmin[y] = min(vmin[y], x);
            vmax[y] = max(vmax[y], x);
        }
        for(auto& b: buildings){
            int x = b[0], y = b[1];
            if( x > vmin[y] && x < vmax[y] && y > hmin[x] && y < hmax[x]) {
                ++r;
            }
        }
        return r;
    }
};
