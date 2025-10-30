class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> mem(256, 0);
        vector<string> v;
        for(char c: string("qwertyuiop")){ mem[c] = 1; }
        for(char c: string("asdfghjkl")){ mem[c] = 2; }
        for(char c: string("zxcvbnm")){ mem[c] = 3; }
        for(string s: words){
            int n = mem[tolower(s.back())];
            bool signal = true;
            for(char c: s){
                if(mem[tolower(c)] != n){
                    signal = false;
                    break;
                }
            }
            if(signal) v.push_back(s);
        }
        return v;
    }
};
