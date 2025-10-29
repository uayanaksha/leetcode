class Solution {
public:
    int myAtoi(string s) {
        int l = 0;
        while(l < s.size() && s[l] == ' '){
            ++l;
        }
        bool negFlag = s[l] == '-';
        bool posFlag = s[l] == '+';
        if(negFlag || posFlag) ++l;
        long long n = 0;
        while(l < s.size() && s[l] >= '0' && s[l] <= '9' ){
            long long exp = 10*n;
            long long digit = s[l] - '0';
            if ((exp > 0 && digit > INT_MAX - exp) 
            || (exp < 0 && digit < INT_MIN - exp)) {
                return negFlag ? INT_MIN : INT_MAX;
            }
            n = exp + digit;
            ++l;
        }
        return negFlag ? -n : n;
    }
};
