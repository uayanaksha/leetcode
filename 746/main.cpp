class Solution {
public:
    vector<int> dp;
    vector<int> cost;
    int climb(int n) {
        if (cost.size() - n <= 2)
            return dp[n] = cost[n];
        if(dp[n] != -1) return dp[n];
        int _1 = climb(n + 1);
        int _2 = climb(n + 2);
        return dp[n] = cost[n] + min(_1, _2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size()+1;
        vector<int> dp(n, -1);
        this->dp = dp;
        this->cost = cost;
        int _0 = climb(0);
        int _1 = climb(1);
        return min(_0, _1);
    }
};
