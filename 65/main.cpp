class Solution {
public:
    bool isNumber(string s) {
        regex rg(R"(^[-+]?(\d+|\d+\.\d+|\d+\.|\.\d+)(e[-+]?\d+)?$)", regex::icase);
        return regex_match(s, rg); 
    }
};
