class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int n = s.size();
        for (int i = 1; i < n; ++i) {
            sum += (s[i] > s[i - 1]) ? s[i] - s[i - 1] : s[i - 1] - s[i];
        }
        return sum;
    }
};
