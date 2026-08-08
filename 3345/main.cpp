class Solution {
public:
    int smallestNumber(int n, int t) {
        int p = 1;
        int nc = n;
        while(nc > 0){
            p *= (nc%10);
            nc /= 10;
        }
        if(p % t == 0){
            return n;
        }
        return smallestNumber(n+1, t);
    }
};
