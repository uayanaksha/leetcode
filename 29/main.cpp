class Solution {
public: 
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        using ll = long long;
        ll q{}, ans{}, shft{}, dy=llabs(dividend), dx=llabs(divisor);
        while(dy >= dx){
            shft=0;
            while(dy >= dx<<(shft+1)) {
                ++shft;
            }
            ans += 1<<shft;
            dy -= (dx<<shft) ;
        }
        return (divisor<0 ^ dividend<0) ? -ans : ans;
    }
};
