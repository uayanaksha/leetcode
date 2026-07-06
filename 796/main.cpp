class Solution {
public:
    bool rotateString(string s, string goal) {
        string r = s;
        if(s == goal)
            return true;
        do {
            r = r.substr(1, s.size()-1) + r[0];
        } while(r != goal && r != s);
        return r == goal;
    }
};
