class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ctr=0;
        while(start && goal){
            bool flag = (start & 1) != (goal & 1);
            if(flag) ++ctr;
            start >>= 1;
            goal >>= 1;
        }
        while(start){
            if(start & 1) ++ctr;
            start >>= 1;
        }
        while(goal){
            if(goal & 1) ++ctr;
            goal >>= 1;
        }
        return ctr;
    }
};
