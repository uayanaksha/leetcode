class Solution {
public:
    string reverseWords(string s) {
        for(int i{}; i<s.size(); ++i){
            int l = i;
            while(l < s.size() && s[l] == ' '){
                ++l;
            }
            int r = l;
            while(r < s.size() && s[r] != ' '){
                ++r;
            }
            --r;
            i = r;
            while(l < r){
                swap(s[l++], s[r--]);
            }
        }
        return s;
    }
};
