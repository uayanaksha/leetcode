class Solution {
public:
    using ll = long long;
    long long getDescentPeriods(vector<int>& prices) {
        ll n = prices.size(), ctr{};
        vector<int> mem;
        mem.push_back(prices[0]);
        for(int i=1; i<=n; ++i){
            if( i == n || mem.back() - prices[i] != 1){
                ll nT = mem.size();
                ctr = ctr + (nT * (nT + 1))/2;
                if(i == n) continue;
                mem.clear();
            }
            mem.push_back(prices[i]);
        }
        return ctr;
    }
};
