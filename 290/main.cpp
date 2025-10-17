class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, string> memw, memc;
        int c{};
        string word = "";
        for (int i{}; i < pattern.size(); ++i) {
            if(s.length() == 0) return false;
            word = s.substr(0, s.find(" "));
            c = pattern[i]-'a';
            if(memw.find(word) == memw.end() && memc.find(to_string(c)) == memc.end()){
                memw[word] = to_string(c);
                memc[to_string(c)] = word;
            } else if (memw[word] == to_string(c) && memc[to_string(c)] == word) {}
            else {
                return false;
            }
            s.erase(0, word.length() + string(" ").length());
        }
        return s.size() == 0;
    }
};
