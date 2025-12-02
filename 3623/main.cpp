class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        using ll = long long;
        ll MOD = 1e9 + 7, sum{}, cc{};
        unordered_map<int, int> mp(points.size());
        for(auto &point: points){
            mp[point[1]]++;
        }
        for(auto& [y, ctr]: mp){
            if (ctr <= 1) continue;
            const ll c = ctr*(ctr-1LL)/2LL;
            sum += c;
            cc+=c*c;
        }
        ll r = (sum * sum - cc)>>1;
        r %= MOD;
        return r;
    }
};
