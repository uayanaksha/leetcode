class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i = 1; i <= s.size() / 2; ++i) {
            if (n % i == 0) {
                string r, sub = s.substr(0, i);
                while (r.size() < n) {
                    r += sub;
                }
                if (r == s) {
                    return true;
                }
            }
        }
        return false;
    }
};
