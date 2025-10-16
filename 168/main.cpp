class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        int Q = (columnNumber - 1) / 26;
        int R = (columnNumber - 1) % 26;
        if (Q > 0) {
            s += convertToTitle(Q);
        }
        s += (char)('A' + R);
        return s;
    }
};
