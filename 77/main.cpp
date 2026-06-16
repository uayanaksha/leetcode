class Solution {
public:
    vector<int> getCombination(int n){
        vector<int> v;
        for(int i=1; n; ++i){
            if (n & 1){
                v.push_back(i);
            }
            n /= 2;
        }
        return v;
    }
    vector<vector<int>> combine(int n, int k) {
        int ub = 1 << n;
        vector<vector<int>> v;
        for(int i{}; i<ub; ++i){
            if(__builtin_popcount(i) != k) continue;
            vector<int> combination = getCombination(i);
            v.push_back(combination);
        }
        return v;
    }
};
