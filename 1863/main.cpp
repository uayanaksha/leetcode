class Solution {
public:
    int computeXor(vector<int>& nums, int idx){
        int xored = 0;
        for(int i=0; i<nums.size(); ++i){
            if(idx & (1<<i)){
                xored ^= nums[i];
            }
        }
        return xored;
    }

    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int k = (1 << n);
        int sum = 0;
        for(int i = 0; i<k; ++i){
            int xored = computeXor(nums, i);
            sum += xored;
        }
        return sum;
    }
};
