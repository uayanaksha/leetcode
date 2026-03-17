class Solution {
public:
    string convertDateToBinary(string date) {
        int y{}, m{}, d{};
        string ybin{}, mbin{}, dbin{}, s{};
        int n = date.size(), i{};
        for (int i{}; i<4; ++i) {
            y = 10 * y + (date[i] - '0');
        }
        while (y > 0) {
            if (y & 1) {
                s = "1" + s;
            } else {
                s = "0" + s;
            }
            y /= 2;
        }   ybin = s + "-";
        s = "";
        for (int i=5; i<7; ++i) {
            m = 10 * m + (date[i] - '0');
        }
        while (m > 0) {
            if (m & 1) {
                s = "1" + s;
            } else {
                s = "0" + s;
            }
            m /= 2;
        }   mbin = s + "-";
        s = "";
        for (int i = 8; i < n; ++i) {
            d = 10 * d + (date[i] - '0');
        }
        while (d > 0) {
            if (d & 1) {
                s = "1" + s;
            } else {
                s = "0" + s;
            }
            d /= 2;
        } dbin = s;
        return ybin + mbin + dbin;
    }
};
