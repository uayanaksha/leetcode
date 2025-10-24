class Solution {
public:
    string addStrings(string num1, string num2) {
        int p1 = num1.size() - 1, p2 = num2.size() - 1, carry = 0;
        string s;

        while(p1 >= 0 || p2 >= 0 || carry){
            if(p1 >= 0) carry += (num1[p1--] - '0');
            if(p2 >= 0) carry += (num2[p2--] - '0');
            s += carry % 10 + '0';
            carry /= 10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
