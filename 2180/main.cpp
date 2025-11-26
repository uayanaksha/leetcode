class Solution {
public:
    bool is_even(int x){
        int r{};
        while(x){
            r += (x%10);
            x /= 10;
        }
        return r % 2 == 0;
    }
    int countEven(int num) {
        int d = num / 20;
        int r{};
        for(int i=0 + 1; i <= num; ++i){
            if(is_even(i)) ++r;
        }
        return r;
    }
};
