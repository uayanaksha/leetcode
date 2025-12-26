class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int i{};
        long long res{};
        sort(happiness.begin(), happiness.end(), greater<int>());
        for(int _{}; _<k; ++_){
            happiness[i] = max(happiness[i] - i, 0);
            res += (long long)happiness[i++];
        }
        return res;
    }
};
