class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> v(256, -1);
        int sum{};
        for (const auto& stone : stones) {
            if (v[stone] < 0) {
                v[stone] = (jewels.find(stone) != string::npos) ? 1 : 0;
            }
            sum = sum + v[stone];
        }
        return sum;
    }
};
