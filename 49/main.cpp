class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<pair<string, string>> mem;
        for(string s: strs){
            pair<string, string> p(s, s);
            sort(p.first.begin(), p.first.end());
            mem.push_back(p);
        }
        sort(mem.begin(), mem.end());
        for(int i{}; i<mem.size();){
            vector<string> v;
            int j = i;
            for(; j<mem.size() && mem[j].first == mem[i].first; ++j){
                v.push_back(mem[j].second);
            }
            res.push_back(v);
            i = j;
        }
        return res;
    }
};
