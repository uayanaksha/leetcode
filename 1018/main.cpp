class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> mem;
        int k{};
        for(const int num: nums){
            k = (k * 2 + num) % 5;
            mem.push_back(k == 0);
        }
        return mem;
    }
};
