class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<int> p(n);
        vector<string> r(n);
        iota(p.begin(), p.end(), 0);
        sort(p.begin(), p.end(), [&](const int a, const int b) {
            return heights[a] > heights[b];
        });
        for(int i{}; i<n; ++i){
            r[i] = names[p[i]];
        }
        return r;
    }
};
