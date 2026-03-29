class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i{}; i<4; ++i){
            if(s1[i] == s2[i]) continue;
            if(i + 2 < 4 && s1[i] == s2[i+2] && s1[i+2] == s2[i]){
                swap(s2[i], s2[i+2]);
            } else {
                return false;
            }
        }
        return true;
    }
};
