class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> sv(26, -1), tv(26, -1);
        int sum{};
        for(int i{}; i<s.size(); ++i){
            int c = s[i] - 'a';
            if(sv[c] >= 0) continue;
            sv[c] = i;
        }
        for(int i{}; i<t.size(); ++i){
            int c = t[i] - 'a';
            if(tv[c] >= 0) continue;
            tv[c] = i;
        }
        for(int i{}; i<26; ++i){
            if(sv[i] == -1 || tv[i] == -1) continue;
            sum = sum + abs(sv[i] - tv[i]);
        }
        return sum;
    }
};
