class Solution {
public:
    int maxDepth(string s) {
        int maxim{};
        int ctr{};
        for(int i{}; i<s.size(); ++i){
            if(s[i] == '('){
                ++ctr;
                if(ctr > maxim){
                    maxim = ctr;
                }
            }
            if(s[i] == ')'){
                --ctr;
            }
        }
        return maxim;
    }
};
