class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ctr{};
        for(int num: nums){
            int r = num%3;
            ctr += r==0 ? 0 : 1;
        }
        return ctr;
    }
};
