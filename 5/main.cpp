class Solution {
public:
    bool isPalindrome(string s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int k = s.size();
        while (--k) {
            for (int i{}, j=k; j < n; i++, j++) {
                if (isPalindrome(s, i, j)) {
                    return s.substr(i, k+1);
                }
            }
        }
        return s.substr(0, 1);
    }
};
