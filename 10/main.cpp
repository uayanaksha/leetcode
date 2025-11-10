class Solution {
public:
    bool isMatch(string s, string p) {
        regex rg(p);
        return regex_match(s, rg);
    }
};
