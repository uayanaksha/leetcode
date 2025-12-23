class Solution {
public:

    int minDeletionSize(vector<string>& strs) {
        int maxim{1uz};
        auto n{strs.size()};
        auto m{strs[0].size()};
        vector<int> dp(m, 1);
        for(auto i{0uz}; i<m; ++i){
            for(auto j{0uz}; j<i; ++j){
                bool sig = true;
                for(auto k{0uz}; k<n; ++k){
                    if(strs[k][j] > strs[k][i]){
                        sig = false;
                        break;
                    }
                }
                if(sig){
                    dp[i] = max(dp[i], dp[j]+1);
                    maxim = max(maxim, dp[i]);
                }
            }
        }
        return m - maxim;
    }
};
