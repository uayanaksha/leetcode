class Solution {
public:
    string truncateSentence(string s, int k) {
        int i{};
        for(; i<s.size(); ++i){
            while(i<s.size() && s[i] != ' '){
                ++i;
            }
            if(--k == 0) break;
        }
        string r(s.begin(), s.begin()+i);
        return r;
    }
};
