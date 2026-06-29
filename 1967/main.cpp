class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ctr{};
        for(int i{}; i<patterns.size(); ++i){
            if(word.find(patterns[i]) == string::npos){
                continue;
            }
            ctr++;
        }
        return ctr;
    }
};
