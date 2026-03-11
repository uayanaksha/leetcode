class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int c = n, l = 0;
        while(c){
            c /= 2;
            ++l;
        }
        int tmp = (1<<l) - 1;
        return tmp ^ n;
    }
};
