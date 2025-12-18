class Solution {
public:
    using ll = long long;
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
        ll r = 0;
        for(int i{}; i<n; ++i){
            r += prices[i] * strategy[i];
        }
        ll curr = r;
        for(int i{}; i<k/2; ++i){
            curr -= prices[i]*strategy[i];
        }
        for(int i=k/2; i<k; ++i){
            curr += (1-strategy[i])*prices[i];
        }
        r = max(r, curr);
        for(int i=k; i<n; ++i){
            curr += (1-strategy[i]) * prices[i];
            curr += prices[i - k] * strategy[i - k];
            curr -= prices[i - k/2];
            r = max(r, curr);
        }
        return r;
    }
};
