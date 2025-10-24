class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string g;
            while(s.size() > 1){
                int l = s.back()-'0';
                s.pop_back();
                l += s.back() - '0';
                g += ((l%10) + '0');
            }
            s = g;
        }
        return s.front() == s.back();
    }
};
