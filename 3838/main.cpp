class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string r = "";
        for(int i{}; i<words.size(); ++i){
            int sum = 0;
            for(int j{}; j<words[i].size(); ++j){
                sum += weights[words[i][j] - 'a'];
            }
            int mod = sum % 26;
            char c = (char)('z' - mod);
            r += c;
        }
        return r;
    }
};
