class Solution {
public:
    string processStr(string s) {
        string r = "";
        for (int i{}; i < s.size(); ++i) {
            char c = s[i];
            if (c != '#' && c != '%' && c != '*') {
                r += c;
                continue;
            }
            if (r.size() == 0){
                continue;
            }
            switch(c){
                case '*': 
                r = r.substr(0, r.size() - 1);
                break;

                case '#':
                r += r;
                break;

                case '%':
                reverse(r.begin(), r.end());
                break;
            }
        }
        return r;
    }
};
