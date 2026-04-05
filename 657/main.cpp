class Solution {
public:
    bool judgeCircle(string moves) {
        int xAxis = 0, yAxis = 0;
        for(char move: moves){
            if(move == 'R') xAxis++;
            else if(move == 'L') xAxis--;
            else if(move == 'U') yAxis++;
            else if(move == 'D') yAxis--;
        }
        return xAxis == yAxis && yAxis == 0;
    }
};
