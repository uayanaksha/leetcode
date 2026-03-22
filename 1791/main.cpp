class Solution {
public:
    template<typename T> using v = vector<T>;
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int f0 = edges[0][0];
        int f1 = edges[0][1];
        int b0 = edges[n-1][0];
        int b1 = edges[n-1][1];
        if(f0 == b0) return b0;
        if(f1 == b0) return b0;
        if(f0 == b1) return b1;
        return b1;
    }
};
