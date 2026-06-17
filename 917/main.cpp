class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.size()-1;
        while(l < r){
            while(!isalpha(s[l]) && l < r) ++l;
            while(!isalpha(s[r]) && r > l) --r;
            char c = s[l];
            s[l++] = s[r];
            s[r--] = c;
        }
        return s;
    }
};
