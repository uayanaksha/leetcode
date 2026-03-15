class Solution {
public:
    string reverseStr(string r, int k) {
        string s = r;
        int n = s.size();
        for(int i{}; i<n;){
            for(int l{i}, r=min(i+k, n)-1; l < r; ){
                auto c = s[l];
                s[l] = s[r];
                s[r] = c;
                ++l;
                --r;
            }
            i += 2*k;
        }
        return s;
    }
};
