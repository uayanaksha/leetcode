class Solution {
public:
    inline int count_words(string s) {
        int ctr=0;
        for (const char c : s) {
            if (c == ' ') {
                ++ctr;
            }
        }
        return ctr+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maximum_words = 0;
        for(int i{}; i<n; ++i){
            int r = count_words(sentences[i]);
            maximum_words = max(maximum_words, r);
        }
        return maximum_words;
    }
};
