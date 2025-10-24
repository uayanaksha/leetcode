class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int pg=0, ps=0, ctr=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (pg < g.size() && ps < s.size()) {
            if (s[ps] >= g[pg]) {
                ++ctr;
                ++ps;
                ++pg;
            } else ++ps;
        }
        return ctr;
    }
};
