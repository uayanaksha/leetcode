class Solution {
public:
    string removeOuterParentheses(string s) {
        string r;
        vector<char> v;
        for(const char& c: s){
            if(c == '('){
                v.push_back('(');
                if(v.size()>1){
                    r += '(';
                }
            } else {
                v.pop_back();
                if(v.size()>0){
                    r += ')';
                }
            }
        }
        return r;
    }
};
