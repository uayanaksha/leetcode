class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        while (left <= right) {
            if (left < 10) {
                v.push_back(left);
            } else {
                bool is_perfect = true;
                for (int i = left; i > 0; i /= 10) {
                    int digit = i % 10;
                    if (digit == 0 || left % digit != 0) {
                        is_perfect = false;
                        break;
                    }
                }
                if (is_perfect)
                    v.push_back(left);
            }
            left++;
        }
        return v;
    }
};
