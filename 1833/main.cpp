class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ctr{};
        for (int& c : costs) {
            if (c > coins)
                break;
            coins -= c;
            ++ctr;
        }
        return ctr;
    }
};
