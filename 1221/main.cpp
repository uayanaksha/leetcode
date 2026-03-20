class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int ctr{};
        int rc = 0;
        int lc = 0;
        for (int i{}; i < n; ++i) {
            if (s[i] == 'R') rc++;
            else lc++;
            if (rc == lc && rc != 0) {
                ++ctr;
            }
        }
        return ctr;
    };
};
