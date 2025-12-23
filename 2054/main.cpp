class Solution {
public:
    template<typename T> using v = vector<T>;
    int maxTwoEvents(vector<vector<int>>& events) {
        int n = events.size();
        int r{}, m{};
        v<v<int>> p(2*n);
        for(int i{}, j{}; i<n; ++i){
            int val = events[i][2];
            p[j++] = {events[i][0], 1, val}; 
            p[j++] = {events[i][1]+1, 0, val}; 
        }
        sort(p.begin(), p.end(), [](const auto& x, const auto& y){
            if(x[0] == y[0]){
                return x[1] < y[1];
            }
            return x[0] < y[0];
        });
        for(int i{}; i<p.size(); ++i){
            int is_start = p[i][1];
            int val = p[i][2];
            if(is_start){
                r = max(r, m+val);
            } else {
                m = max(m, val);
            }
        }
        return r;
    }
};
