class Solution {
public:
    int totalMoney(int n) {
        double r = n%7;
        double d = n/7;
        double sum = d*28.0 + 7*d*(d-1)/2.0;
        if(r>0){
            sum = sum + (d+r)*(d+r+1)/2.0 - d*(d+1)/2.0;
        }
        return sum;
    }
};
