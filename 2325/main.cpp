class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<int> v(26, 0);
        int n = key.size();
        char x='a';
        for(int i{}; i<n && x<='z'; ++i){
            if(key[i] == ' ') continue;
            char c = key[i] - 'a';
            if(v[c] > 0) continue;
            v[c] = x++;
        }
        string s = message;
        for(int i{}; i<message.size(); ++i){
            if(s[i] == ' ')continue;
            char c = message[i] - 'a';
            s[i] = v[c];
        }
        return s;
    }
};
