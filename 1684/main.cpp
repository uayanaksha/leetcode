class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       vector<bool> mem(256, false);
       int ctr{}, n = words.size();
       for(const char c: allowed){
        if(mem[c]) continue;
        mem[c] = true;
       } 
       for(int i{}; i<n; ++i){
        bool is_consistent = true;
        for(int j{}; j<words[i].size() && is_consistent; ++j){
            int c = words[i][j];
            is_consistent = mem[c];
        }
        if(is_consistent) ++ctr;
       }
       return ctr;
    }
};
