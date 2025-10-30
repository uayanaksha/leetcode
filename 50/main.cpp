class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return (double) 1;
        if(x == 1 || x == 0 || n == 1) return x;
        int negflag = x < 0 && n % 2 != 0 ? -1 : 1;
        double r = 1.00;
        x = abs(x);
        if(x == 1 || x == 0) return negflag * x;
        if(n < -20) return 0;
        for(int i = n; i<0; ++i){
            r /= x;
            if(r == 1 || r == 0) break;
            if(r > 10000 || r < -10000) return 0;
        }
        for(int i = n; i>0; --i){
            r *= x;
            if(r == 1 || r == 0) break;
            if(r > 10000 || r < -10000) return 0;
        }
        return negflag*r;
    }
};
