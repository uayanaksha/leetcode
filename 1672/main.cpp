class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int maxim = 0;
        for(int i{}; i<m; ++i){
            int sum = 0;
            for(int j{}; j<n; ++j){
                sum += accounts[i][j];
            }
            if(maxim < sum){
                maxim = sum;
            }
        }
        return maxim;
    }
};
