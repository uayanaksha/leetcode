class Solution {
public:
    int sumBase(int n, int k) {
        int m{}, exp=1, r;
        while(n){
            r = n % k;
            m += exp * r;
            exp *= 10;
            n /= k;
        }
        r=0;
        do{
            r += (m%10);
        } while(m/=10);
        return r;
    }
};
