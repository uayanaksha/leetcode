class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val{};
        for(int num: nums){
          val ^= num;
        }
        return val;
    }
};
