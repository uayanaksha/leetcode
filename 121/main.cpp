class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      int profit = 0, minim=INT_MAX;
      for(int i{}; i<n; ++i){
        int curr = prices[i];
        minim = min(minim, curr);
        profit = max(profit, curr - minim);
      }
      return profit;
    }
};
