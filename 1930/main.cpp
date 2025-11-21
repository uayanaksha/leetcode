class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size(), ctr{};
        vector<int> start(26, -1), end(26, -1);
        vector<vector<int>> mem(26, vector<int>(26, 0));
        for (int i{}; i < n; ++i) {
            if (start[s[i]-'a'] < 0){
                start[s[i]-'a'] = i;
            }
            if (end[s[n - i - 1]-'a'] < 0){
                end[s[n - i - 1]-'a'] = n - i - 1;
            }
        }
        for (int a{}; a < 26; ++a) {
            if (start[a] + 1 >= end[a]) {
                continue;
            }
            for (int i = start[a] + 1; i < end[a]; ++i) {
                if (mem[a][s[i]-'a']){
                    continue;
                }
                mem[a][s[i]-'a'] = 1;
                ++ctr;
            }
        }
        return ctr;
    }
};
