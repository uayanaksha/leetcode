class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s1 = 0;
        long long s2 = 0;
        long long tmp = n * 1LL;
        while(tmp > 0){
            int r = tmp % 10;
            if(r > 0){
                s1 = 10*s1 + r;
                s2 += r;
            }
            tmp /= 10;
        }
        tmp = s1;
        s1 = 0;
        while(tmp > 0){
            s1 = 10*s1 + (tmp % 10);
            tmp /= 10;
        }
        return s1*s2;
    }
};
