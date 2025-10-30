class Solution {
public:
    int hammingDistance(int x, int y) {
        int ctr{};
        x ^= y;
        while(x > 0){
            x &= (x-1);
            ++ctr;
        }
        return ctr;
    }
};
