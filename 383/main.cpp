class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mem(256, 0);
        for (int i{}; i<magazine.size(); ++i) {
            mem[magazine[i]]++;
        }
        for (int i{}; i<ransomNote.size(); ++i) {
            mem[ransomNote[i]]--;
        }
        for(int i{'a'}; i<='z'; ++i){
            if(mem[i] < 0){
                return false;
            }
        }
        return true;
    }
};
