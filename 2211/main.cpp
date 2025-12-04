class Solution {
public:
    int countCollisions(string directions) {
        if(directions.size() < 2) return 0;
        while(!directions.empty() && directions.back() == 'R'){
            directions.pop_back();
        }
        reverse(directions.begin(), directions.end());
        while(!directions.empty() && directions.back() == 'L'){
            directions.pop_back();
        }
        if(directions.size() < 2) return 0;
        int ctr{}; 
        while(!directions.empty()){
            if(directions.back() != 'S'){
                ++ctr;
            }
            directions.pop_back();
        }
        return ctr;
    }
};
