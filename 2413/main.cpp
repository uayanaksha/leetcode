class Solution {
public:
    int smallestEvenMultiple(int n) {
        int f = n << (n&1);
        return f;
    }
};
