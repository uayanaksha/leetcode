class Solution {
public:
    int countOperations(int num1, int num2) {
        auto ctr{0uz};
        while(num1 != 0 && num2 != 0){
            if(num1 >= num2) num1 -= num2;
            else num2 -= num1;
            ++ctr;
        }
        return ctr;
    }
};
