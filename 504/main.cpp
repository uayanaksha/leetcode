class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        bool is_neg = num < 0;
        string s;
        num = abs(num);
        do {
            s.push_back('0' + (num % 7));
        } while (num/=7);
        if (is_neg){
            s.push_back('-');
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
