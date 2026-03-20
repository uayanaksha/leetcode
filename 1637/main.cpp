class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        int widest = 0;
        sort(points.begin(), points.end());
        for(int i=1; i<n; ++i){
            widest = max(widest, points[i][0] - points[i-1][0]);
        }
        return widest;
    }
};
