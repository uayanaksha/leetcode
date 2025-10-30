class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string r;
        for(int i=s.size()-1, ctr=1; i>= 0; --i){
            if(s[i] == '-') continue;
            r+= (char)toupper(s[i]);
            if(ctr == k){
                r += '-';
                ctr = 0;
            }
            ++ctr;
        }
        if(!r.empty() && r.back() == '-') r.pop_back();
        reverse(r.begin(), r.end());
        return r;
    }
};
