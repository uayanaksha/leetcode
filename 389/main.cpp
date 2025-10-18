class Solution {
public:
    char findTheDifference(string s, string t) {
        int c = 0;
        for(int i{}; i<s.size(); ++i){
            c ^= s[i];
        }
        for(int i{}; i<t.size(); ++i){
            c ^= t[i];
        }
        return char(c);
    }
};
