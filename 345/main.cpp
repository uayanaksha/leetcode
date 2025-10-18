class Solution {
public:
    bool compare(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string reverseVowels(string s) {
        int l{}, r=s.size()-1, n=s.size();
        while(l<r){
            while(l < n && !compare(tolower(s[l]))){
                ++l;
            }
            while(r > 0 && !compare(tolower(s[r]))){
                --r;
            }
            if(l<r){
                char tmp = s[l];
                s[l] = s[r];
                s[r] = tmp;
                l++;
                r--;
            }
        }
        return s;
    }
};
