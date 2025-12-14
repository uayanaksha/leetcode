class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> mem(1e5+3, 0), r;
        int minim = 5e4, maxim = -5e4;
        for(int &n: nums){
            int idx = 5e4 + n;
            minim = min(minim, idx);
            maxim = max(maxim, idx);
            mem[idx]++;
        }
        while(minim <= maxim){
            while(mem[minim]--) {
                r.push_back(minim - 5e4);
            };
            ++minim;
        }
        return r;
    }
};
