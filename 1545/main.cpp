class Solution {
public:
    char findKthBit(int n, int k) {
        if(n == 1) return '0';
        int size = (1 << n) - 1;
        int m = size/2 + 1;
        if(k == m) return '1';
        else if(k < m) return findKthBit(n-1, k);
        return findKthBit(n-1, size - k + 1) == '1' ? '0' : '1';
    }
};
