class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() -1;
        while(l<=r){
          while(!isalnum(s[l]) && l<=r){
            ++l;
          }
          while(!isalnum(s[r]) && r>=l){
            --r;
          }
          if(tolower(s[l]) != tolower(s[r])) break;
          ++l;
          --r;
        }
        return l > r;
    }
};
