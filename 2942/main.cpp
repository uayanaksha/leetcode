class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = static_cast<int>(words.size());
        vector<int> v;
        for(int i{}; i<n; ++i){
            if(words[i].find(x) != string::npos){
                v.push_back(i);
            }
        }
        return v;
    }
};
