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
            int v = ((a[r] - '0') * 4) + ((b[r] - '0') * 2) + carry;
            switch (v) {
            case 0b000:
                s = '0' + s;
                carry = 0;
                break;
            case 0b111:
                s = '1' + s;
                carry = 1;
                break;
            default:
                int x = !((a[r] - '0') ^ (b[r] - '0')) ^ carry;
                if(!x) {
                    s = '1' + s; carry = 0; 
                } else {
                    s = '0' + s; carry = 1;
                } break;
            }
            r++;
        }
        while (r < an) {
            int v = ((a[r] - '0') * 2) + carry;
            switch (v) {
            case 0b00:
                s = '0' + s;
                carry = 0;
                break;
            case 0b11:
                s = '0' + s;
                carry = 1;
                break;
            default:
                s = '1' + s;
                carry = 0;
                break;
            }
            r++;
        }
        while (r < bn) {
            int v = ((b[r] - '0') * 2) + carry;
            switch (v) {
            case 0b00:
                s = '0' + s;
                carry = 0;
                break;
            case 0b11:
                s = '0' + s;
                carry = 1;
                break;
            default:
                s = '1' + s;
                carry = 0;
                break;
            }
            r++;
        }
        if (carry == 1) {
            s = '1' + s;
        }
        return s;
    }
};
