class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int minim=INT_MAX, min_ctr{}, n = complexity.size(), MOD = 1e9 + 7;
        long r=1;
        for(int& e: complexity){
            if(e == minim){
                ++min_ctr;
            } else if(e < minim){
                min_ctr = 1;
                minim = e;
            }
        }
        bool is_min_in_front = minim == complexity.front();
        if(!is_min_in_front || min_ctr > 1) return 0;
        for(int i=2; i<n; ++i){
            r = (r*i)%MOD;
        }
        return r;
    }
};
