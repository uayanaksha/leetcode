class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        auto sum{0uz};
        for(size_t i=1; i<points.size(); ++i){
            int dx = points[i][0] - points[i-1][0];
            int dy = points[i][1] - points[i-1][1];
            sum += max(abs(dx), abs(dy));
        }
        return sum;
    }
};
