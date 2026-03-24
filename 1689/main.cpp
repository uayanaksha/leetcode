class Solution {
public:
    int minPartitions(string n) {
        int maxim_digit = 0;
        for(const char c: n){
            int r = c-'0';
            if(r > maxim_digit){
                if((maxim_digit = r) == 9) break;
            }
        }
        return maxim_digit;
    }
};
