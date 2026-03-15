class Solution {
public:
    bool checkRecord(string s) {
        int mostLates = 0;
        int totalAbsents = 0;
        for (int i{}; i < s.size(); ++i) {
            if (s[i] != 'A')
                continue;
            ++totalAbsents;
        }
        for (int i{}; i < s.size();) {
            if (s[i] != 'L') {
                ++i;
                continue;
            }
            int ctr = 0;
            while(i<s.size() && s[i] == 'L'){
                ++ctr;
                ++i;
            }
            mostLates = max(mostLates, ctr);
        }
        return mostLates < 3 && totalAbsents < 2;
    }
};
