class Solution {
public:
    int findClosest(int x, int y, int z) {
        int diffp1p3 = abs(x-z);
        int diffp2p3 = abs(y-z);
        int diff = diffp1p3 - diffp2p3;
        if(diff > 0) return 2;
        else if(diff < 0) return 1;
        return 0;
    }
};
