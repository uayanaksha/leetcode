class Solution {
public:
    int reverse(long x) {
        bool negflag = x < 0;
        if(negflag) x = -x;
        long a = 0;
        while(x > 0){
            int digit = x%10;
            if(10*a > 0 && digit > numeric_limits<int>::max() - 10*a){
                return 0;
            } else  {
                a = 10*a + (x%10);
                x /= 10;
            }
        }
        return negflag ? -a : a;
    }
};
