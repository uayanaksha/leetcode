class Solution {
public:
    bool isAnagram(string s, string t){
      if(s.size() != t.size()) {
        return false; 
      }
      vector<int> mem(26, 0);
      for(char c: s){
        mem[c-'a']++;
      }
      for(char c: t){
        mem[c-'a']--;
      }
      for(int blk: mem){
        if(blk != 0) {
          return false;
        };
      }
      return true;
    }
};
