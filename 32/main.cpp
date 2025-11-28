class Solution {
public:
    int longestValidParentheses(string s) {
        const int n = s.size();
        int maxim{}, tmp{};
        vector<char> v;
        vector<int> idx;
        vector<bool> mem(s.size(), false);
        for (int i{}; i < n; ++i) {
            char c = s[i];
            if (s[i] == ')' && !v.empty() && v.back() == '(') {
                mem[i] = mem[idx.back()] = true;
                v.pop_back();
                idx.pop_back();
            } else {
                v.push_back(c);
                idx.push_back(i);
            }
        }
        for (bool e: mem) {
            if (e){ maxim = max(maxim, ++tmp); }
            else { tmp = 0; }
        }
        return maxim;
    }
};
