class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> v(n);
        int max_candies = *max_element(candies.begin(), candies.end());
        for(int i{}; i<candies.size(); ++i){
            v[i] = max_candies <= candies[i] + extraCandies;
        }
        return v;
    }
};
