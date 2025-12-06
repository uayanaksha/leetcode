class Solution {
public:
    using vs = vector<string>;
    vs v, mem{"",    "",    "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string digits;
    void fn(string s, int ptr){
        if(ptr >= digits.size()) {
            v.push_back(s);
            return;
        }
        for(char c: mem[digits[ptr] - '0']){
            fn(s+c, ptr+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        this->digits = digits;
        fn("", 0);
        return v;
    }
};
