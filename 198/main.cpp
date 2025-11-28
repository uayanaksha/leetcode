class Solution {
public:
    int rob(vector<int>& nums) {
        int a{}, b{}, tmp{};
        for(int num: nums){
            tmp = a;
            a = max(b+num, a);
            b = tmp;
        }
        return a;
    }
};
