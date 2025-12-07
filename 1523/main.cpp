class Solution {
public:
    int countOdds(int low, int high) {
        low -= low%2;
        return (high - low + 1)/2;
    }
};
