class Solution {
public:
    int countCollisions(string directions) {
        const int n=directions.size();
        int l{}, r=directions.size()-1;
        if(directions.size() < 2) return 0;
        while(l<r && directions[l] == 'L'){
            ++l;
        }
        while(r>0 && directions[r] == 'R'){
            --r;
        }
        if(r-l+1 < 2) return 0;
        int ctr{}; 
        while(l<=r){
            if(directions[l] != 'S'){
                ++ctr;
            }
            ++l;
        }
        return ctr;
    }
};
