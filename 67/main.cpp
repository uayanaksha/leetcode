class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int an = a.size(), bn = b.size();
        int minSize = min(an, bn);
        int carry{}, r{};
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        while (r < an && r < bn) {
            if (a[r] == '1') {
                if (b[r] == '1') {
                    if (carry == 1) {
                        s = '1' + s;
                        carry = 1;
                    } else {
                        s = '0' + s;
                        carry = 1;
                    }
                } else {
                    if (carry == 0) {
                        s = '1' + s;
                        carry = 0;
                    } else {
                        s = '0' + s;
                        carry = 1;
                    }
                }
            } else {
                if (b[r] == '1') {
                    if (carry == 0) {
                        s = '1' + s;
                        carry = 0;
                    } else {
                        s = '0' + s;
                        carry = 1;
                    }
                } else {
                    if (carry == 1) {
                        s = '1' + s;
                        carry = 0;
                    } else {
                        s = '0' + s;
                        carry = 0;
                    }
                }
            }
            r++;
        }
        while (r < an) {
            if (a[r] == '1') {
                if (carry == 1) {
                    s = '0' + s;
                    carry = 1;
                } else {
                    s = '1' + s;
                    carry = 0;
                }
            } else {
                if (carry == 0) {
                    s = '0' + s;
                    carry = 0;
                } else {
                    s = '1' + s;
                    carry = 0;
                }
            }
            r++;
        }
        while (r < bn) {
            if (b[r] == '1') {
                if (carry == 1) {
                    s = '0' + s;
                    carry = 1;
                } else {
                    s = '1' + s;
                    carry = 0;
                }
            } else {
                if (carry == 0) {
                    s = '0' + s;
                    carry = 0;
                } else {
                    s = '1' + s;
                    carry = 0;
                }
            }
            r++;
        }
        if (carry == 1) {
            s = '1' + s;
        }
        return s;
    }
};
