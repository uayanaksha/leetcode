class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26, 0);
        for(char c: s){
            v[c - 'a']++;
        }
        for(int i{}; i<s.size(); ++i){
            char c = s[i] - 'a';
            if(v[c] == 1){
                return i;
            }
        }
        return -1;
    }
};
