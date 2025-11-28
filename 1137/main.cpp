class Solution {
public:
    int tribonacci(int n) {
        int x, a=0, b=1, c=1;
        if(n < 2) return n;
        if(n == 2) return 1;
        for(int i=3; i<=n; ++i){
            x = a+b+c;
            a = b;
            b = c;
            c = x;
        }
        return x;
    }
};
