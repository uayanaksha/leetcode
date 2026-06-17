class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int POS=0, _ = 0;
        for(int i{}; i<moves.size(); ++i){
            switch(moves[i]){
                case 'L': POS++; break;
                case 'R': POS--; break;
                default: _++; break;
            }
        }
        return abs(POS) + _;
    }
};
