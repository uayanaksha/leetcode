class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int d{};
        vector<bool> sorted(n-1, false);

        for(auto c{0uz}; c<m; ++c){
            bool lex_sorted = true;
            for(auto r{0uz}; r<n-1; ++r){
                if(!sorted[r] && strs[r][c] > strs[r+1][c]){
                    lex_sorted = false;
                    break;
                }
            }
            if(!lex_sorted){
                ++d;
                continue;
            }
            for(int r{}; r<n-1; ++r){
                if(!sorted[r] && strs[r][c] < strs[r + 1][c]){
                    sorted[r] = true;
                }
            }
        }
        return d;
    }
};
