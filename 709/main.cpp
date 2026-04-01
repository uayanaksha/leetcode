class Solution {
public:
    string toLowerCase(string s) {
        string r = s;
        for(int i{}; i<s.size(); ++i){
            if(s[i] >= 'A' && s[i] <= 'Z') {
                r[i] = (char)(s[i] - 'A' + 'a');
            }
        }
        return r;
    }
};
