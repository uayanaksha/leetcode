class Solution {
public:
    int numberOfMatches(int n) {
        int matches{};
        while(n>1){
            matches += (n++/2);
            n /= 2;
        }
        return matches;
    }
};
