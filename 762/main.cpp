class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        bool mem[32] = {
            [2] = true, 
            [3] = true, 
            [5] = true, 
            [7] = true, 
            [11] = true, 
            [13] = true, 
            [17] = true, 
            [19] = true, 
            [23] = true, 
            [29] = true, 
            [31] = true, 
        };
        int ctr{};
        for(;left<=right; ++left){
            if(mem[__builtin_popcount(left)]) ++ctr;
        }
        return ctr;
    }
};
