class Solution {
public:
    int numSteps(string s) {
        int i=s.size()-1, ctr{};
        while(i > 0){
            while(i>0 && s[i] == '0'){
                --i;
                ++ctr;
            }
            if(i == 0) break;
            if(i>0 && s[i] != '0'){
                ++ctr;
            }
            while(i>=0 && s[i] != '0'){
                --i;
                ++ctr;
            }
            if(i<0) break;
            else {
                s[i] = '1';
            }
        }
        return ctr;
    }
};
