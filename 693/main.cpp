class Solution {
public:
    bool hasAlternatingBits(int n) {
        int check = (n & 0b11);
        if(check == 0b11 || check == 0b00) 
            return false;
        while(n > 0){
            if((n&0b11) != check){
                return false;
            }
            n /= 4;
        }
        return true;
    }
};
