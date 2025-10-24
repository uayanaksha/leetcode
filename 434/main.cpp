class Solution {
public:
    int countSegments(string s) {
        int l{}, r=s.size()-1;
        while(l < s.size() && s[l] == ' '){
            ++l;
        }
        while(r >= l && s[r] == ' '){
            --r;
        }
        if(r < l) return 0;
        int ctr = 1;
        for(; l<r; ++l){
            if(s[l] != ' ') continue;
            ++ctr;
            while(l < r && s[l] == ' '){
                ++l;
            }
        }
        return ctr;
    }
};
