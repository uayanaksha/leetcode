class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int x{m}, y{n};
        while(!ops.empty()){
            x = min(x, ops.back()[0]);
            y = min(y, ops.back()[1]);
            ops.pop_back();
        }
        return x*y;
    }
};
