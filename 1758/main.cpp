class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int ch = '0';
        int p{}, q{};
        for(int i{}; i<n; ++i){
            if(ch == s[i]) ++p;
            if(ch != s[i]) ++q;
            ch = ch ^ '0' ^ '1';
        }
        return n - max(p, q);
    }
};
