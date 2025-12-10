class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> mem(26, 0);
        string s = "balloon";
        int minim=1e4;
        unordered_map<int, int> mp;
        for(auto &c: s){
            mp[c-'a']++;
        }
        for(auto &c: text){
            mem[c-'a']++;
        }
        for(auto &[e, v]: mp){
            minim = min(minim, mem[e]/v);
        }
        return minim;
    }
};
