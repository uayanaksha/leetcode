class Solution {
public:
    int bestClosingTime(string customers) {
        int n = static_cast<int>(customers.size());
        int penalty{}, min_p{}, min_i{};
        for (int i{}; i < n; ++i) {
            penalty += (customers[i] == 'Y') ? -1 : 1;
            if (min_p > penalty) {
                min_p = penalty;
                min_i = i + 1;
            }
        }
        return min_i;
    }
};
