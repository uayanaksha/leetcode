class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> r(s.size(), 0);
        for(int i{}; i<s.size(); ++i){
            if(s[i]!=c) 
                continue;
            v.push_back(i);
        }
        int ptr = 0;
        for(int i{}; i<s.size(); ++i){
            if(ptr < v.size() && v[ptr] == i){
                ++ptr;
            }
            if(ptr == 0){
                r[i] = v[ptr] - i;
                continue;
            }
            if(ptr == v.size()){
                r[i] = i - v[ptr-1];
                continue;
            }
            r[i] = min(abs(v[ptr] - i), abs(v[ptr-1] - i));
        }
        return r;
    }
};
