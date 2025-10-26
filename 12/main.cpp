class Solution {
public:
    string intToRoman(int num) {
        const array<string, 11> o = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
        const array<string, 10> t = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        const array<string, 10> h = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        const array<string, 4> th = {"", "M", "MM", "MMM"};
        int od = num % 10, td = num / 10 % 10, hd = num / 100 % 10, thd = num / 1000;
        string s = th[thd] + h[hd] + t[td] + o[od];
        return s;
    }
};
