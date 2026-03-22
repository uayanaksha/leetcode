class Solution {
public:
    string reversePrefix(string word, char ch) {
        int l{}, r{};
        int n = word.size();
        for(; r<word.size() && word[r] != ch; ++r);
        if(r == n) return word;
        string s(word.begin(), word.end());
        while(l<r){
            char t = s[l];
            s[l++] = s[r];
            s[r--] = t;
        };
        return s;
    }
};
