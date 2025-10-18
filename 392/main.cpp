class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() > t.size()) return false;
        int ptrs{}, ptrt{};
        while(ptrs < s.size() && ptrt < t.size()){
            char c = s[ptrs];
            while(ptrt < t.size() && t[ptrt] != c){
                ++ptrt;
            }
            if(s[ptrs] != t[ptrt]){
                return false;
            } else {
                ++ptrs;
                ++ptrt;
            }
        }
        return ptrs == s.size();
    }
};
