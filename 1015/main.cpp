class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k % 2 == 0) return -1;
        vector<int> mem(k, -1);
        int n{}, ctr{};
        do{
            n = (n*10 + 1) % k;
            ++ctr;
            if(n == 0) return ctr;
        } while(++mem[n] < 1);
        return -1;
    }
};
