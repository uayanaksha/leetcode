class Solution {
public:
    int xorOperation(int n, int start) {
        int curr = start;
        int x = start;
        while(--n){
            curr += 2;
            x ^= curr;
        }
        return x;
    }
};
