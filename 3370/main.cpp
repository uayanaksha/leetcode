class Solution {
public:
    int smallestNumber(int n) {
        int ctr=1;
        while(ctr<=n){
            ctr <<= 1;
        }
        return ctr-1;
    }
};
