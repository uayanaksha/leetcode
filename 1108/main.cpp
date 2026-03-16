class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for (const auto& c : address) {
            if (c == '.') {
                s = s + "[.]";
            } else {
                s += c;
            }
        }
        return s;
    }
};
