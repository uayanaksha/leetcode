class Solution {
public:
    using ll = long long;
    template <typename T> using v = vector<T>;
    long long maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
        v<v<ll>> dp(3, v<ll>(k + 1, INT_MIN));
        for (int i{}; i <= k; ++i) {
            dp[0][i] = 0;
        }
        for (int i = n - 1; i >= 0; --i) {
            for (int j = k; j >= 0; --j) {
                for (int S = 2; S >= 0; --S) {
                    ll ans = dp[S][j];
                    if (S == 0 && j > 0) {
                        ans = max(ans, dp[1][j - 1] - prices[i]);
                        ans = max(ans, dp[2][j - 1] + prices[i]);
                    } else if (S == 1) {
                        ans = max(ans, prices[i] + dp[0][j]);
                    } else if (S == 2) {
                        ans = max(ans, dp[0][j] - prices[i]);
                    }
                    dp[S][j] = ans;
                }
            }
        }
        return dp[0][k];
    }
};
