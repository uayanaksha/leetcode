class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = static_cast<int>(s.size());
        int l{}, r = min(k, n)-1;
        while(l<r){
            s[l] = s[l] ^ s[r];
            s[r] = s[l] ^ s[r];
            s[l] = s[l] ^ s[r];
            ++l;
            --r;
        }
        return s;
    }
};
