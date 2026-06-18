class Solution {
public:
    bool isGood(int n){
        bool f = false;
        while(n){
            int digit = n%10;
            switch(digit){
                case 3:
                case 4:
                case 7:
                return false;
                
                case 2:
                case 5:
                case 6:
                case 9:
                f = true;
                break;
            }
            n /= 10;
        }
        return f;
    }
    int rotatedDigits(int n) {
        int ctr=0;
        for(int i=1; i<=n; ++i){
            if (isGood(i)){
                ++ctr;
            }
        }
        return ctr;
    }
};
