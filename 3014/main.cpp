class Solution {
public:
    int minimumPushes(string word) {
        int q = word.size() >> 3;
        int r = word.size() & 0b111;
        return ((q * 4) + r) * (q + 1);
    }
};
