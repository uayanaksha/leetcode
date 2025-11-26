class Solution {
public:
    bool checkPerfectNumber(int num) {
        int SoD{};
        if (num > 1)
            ++SoD;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                int j = num / i;
                SoD += i + j;
                if (i * i == num) {
                    SoD -= i;
                }
            }
        }
        return SoD == num;
    }
};
