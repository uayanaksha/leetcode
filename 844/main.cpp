class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S, T;
        for(char &c: s){
            if(c=='#'){
                if(!S.empty()) {
                    S.pop();
                }
            } else {
                S.push(c);
            }
        }
        for(char &c: t){
            if(c=='#'){
                if(!T.empty()) {
                    T.pop();
                }
            } else {
                T.push(c);
            }
        }
        return S == T;
    }
};
