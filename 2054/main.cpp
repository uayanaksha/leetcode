class Solution {
public:
    using vi = vector<int>;
    int maxTwoEvents(vector<vector<int>>& events) {
        int n = events.size(), maxim{};
        vi suff_mx(n);
        sort(events.begin(), events.end(), [](const auto& x, const auto& y){
            return x[0] < y[0];
        });
        suff_mx[n-1] = events[n-1][2];
        for(int i=n-2; i>= 0; --i){
            suff_mx[i] = max(events[i][2], suff_mx[i+1]);
        }
        for(int i{}; i<n; ++i){
            int l = i+1, r = n-1;
            int next_idx = -1;
            while(l <= r){
                int m = l + (r-l)/2;
                if(events[m][0] > events[i][1]){
                    next_idx = m;
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
            if(next_idx > -1){
                maxim = max(maxim, events[i][2] + suff_mx[next_idx]);
            }
            maxim = max(maxim, events[i][2]);
        }
        return maxim;
    }
};
