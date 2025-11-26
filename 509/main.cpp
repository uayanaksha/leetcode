class Solution {
public:
    int fib(int n) {
        if(n < 2) return n;
        int f0 = 0, f1 = 1, tmp;
        for(int i=2; i<=n; ++i){
            tmp = f1;
            f1 += f0;
            f0 = tmp;
        }
        return f1;
    }
};
