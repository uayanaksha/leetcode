class Solution {
public:
    int countTriples(int n) {
        if(n < 5) return 0;
        int ctr{};
        for(int a=1; a<=n; ++a){
            for(int b=a; b<=n; ++b){
                int c2 = (a*a + b*b);
                int c = sqrt(c2);
                if(c > n) break;
                if(c2 % c == 0 && c2/c == c){
                    ctr += 2;
                }
            }
        }
        return ctr;
    }
};
