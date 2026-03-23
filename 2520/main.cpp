class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int ctr{};
        while(x){
            int r = x%10;
            if(num%r == 0){
                ++ctr;
            }
            x /= 10;
        }
        return ctr;
    }
};
