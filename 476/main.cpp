class Solution {
public:
    int findComplement(int num) {
        int d = 0, cp = num;
        while(num > 0){
            d = (d << 1) | 1;
            num >>= 1;
        }
        return cp^d;
    }
};
