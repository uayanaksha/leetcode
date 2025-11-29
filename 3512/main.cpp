class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n{};
        for(int num: nums){ n += num; }
        n %= k;
        return n;
    }
};
