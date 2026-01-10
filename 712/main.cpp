class Solution {
public:
    template <typename T> using vec = vector<T>;
    int minimumDeleteSum(string s1, string s2) {
        int u = s1.size();
        int v = s2.size();
        int i = 1;
        vec<vec<int>> dp(u + 1, vec<int>(v + 1));
        for (; i <= u && i <= v; ++i) {
            dp[i][0] = dp[i - 1][0] + s1[i - 1];
            dp[0][i] = dp[0][i - 1] + s2[i - 1];
        }
        for (; i <= u; ++i) {
            dp[i][0] = dp[i - 1][0] + s1[i - 1];
        } 
        for (; i <= v; ++i) {
            dp[0][i] = dp[0][i - 1] + s2[i - 1];
        }
        for (int i = 1; i <= u; ++i) {
            for (int j = 1; j <= v; ++j) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = min(dp[i - 1][j] + s1[i - 1], dp[i][j - 1] + s2[j - 1]);
                }
            }
        }
        return dp[u][v];
    }
};
