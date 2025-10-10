class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int r = n - 1;
        int ctr{};
        while (r >= 0 && s[r] == ' ') {
            r--;
        }
        while (r >= 0 && s[r] != ' ') {
            r--;
            ctr++;
        }
        return ctr;
    }
};
