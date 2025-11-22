class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unsigned n = score.size();
        vector<string> res(n);
        vector<int> idxs(n);
        iota(idxs.begin(), idxs.end(), 0);
        ranges::sort(idxs, [&](const int a, const int b){
            return score[a] > score[b];
        });
        for(int i{}; i<n; ++i){
            if(i == 0) res[idxs[i]] = "Gold Medal";
            else if(i == 1) res[idxs[i]] = "Silver Medal";
            else if(i == 2) res[idxs[i]] = "Bronze Medal";
            else res[idxs[i]] = to_string(i+1);
        }
        return res;
    }
};
