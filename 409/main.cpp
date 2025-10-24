class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(256, 0);
        for (char c : s) {
            v[c]++;
        }
        int sum{}, maxim{};
        for (int& i : v) {
                sum += (i - (i%2));
                i = i%2;
                if(i > maxim){
                    maxim = i;
                }
        }
        return sum + maxim;
    }
};
