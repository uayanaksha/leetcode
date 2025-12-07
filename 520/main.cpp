class Solution {
public:
    bool detectCapitalUse(string word) {
        int u{}, l{};
        for(char &c: word){
            if(islower(c)){
                ++l;
            } else {
                ++u;
            }
        }
        return l == 0 || u == 0 || (u == 1 && isupper(word.front()));
    }
};
