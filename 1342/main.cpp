class Solution {
public:
    int numberOfSteps(int num) {
        int ctr{};
        while(num){
            if(num & 1){
                num--;
            } else {
                num >>= 1;
            }
            ++ctr;
        }
        return ctr;
    }
};
