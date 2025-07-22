class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long int rev = 0;
        for(int i = x; i != 0; ){
            rev = (10 * rev) + (i % 10);
            i /= 10;
        }
        return rev == x;
    }
};
