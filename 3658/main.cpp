class Solution {
public:
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int sumOfEvens = n * (n+1);
        int sumOfOdds = sumOfEvens - n;
        int r = gcd(sumOfEvens, sumOfOdds);
        return r;
    }
};
