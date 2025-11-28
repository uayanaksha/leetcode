class Solution {
public:
    int longestValidParentheses(string s) {
        const int n = s.size();
        vector<char> v;
        vector<int> idx;
        vector<bool> mem(s.size(), false);
        int maxim{}, tmp{};
        for (int i{}; i < n; ++i) {
            char c = s[i];
            if (s[i] == ')' && !v.empty() && v.back() == '(') {
                mem[i] = mem[idx.back()] = true;
                v.pop_back();
                idx.pop_back();
            } else {
                idx.push_back(i);
                v.push_back(c);
            }
        }
        for (bool e: mem) {
            if (e){
                maxim = max(maxim, ++tmp);
            }
            else {
                tmp = 0;
            }
        }
        return maxim;
    }
};
