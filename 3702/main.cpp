class Solution {
public:
    int longestSubsequence(vector<int>& numsA) {
        vector<int> nums;
        int ctr = 0;
        for(int i{}; i<numsA.size(); ++i){
            if(numsA[i] == 0) {
                ++ctr;
            } else {
                nums.push_back(numsA[i]);
            }
        }
        int x = 0;
        for(int i{}; i<nums.size(); ++i){
            x ^= nums[i];
        }
        if(nums.size() == 0) {
            return 0;
        }
        if(x != 0) {
            return numsA.size();
        }
        int k = nums.size();
        while(k > 0 && x == 0){
            int curr = x;
            for(int i=0, j=k; j < nums.size() && curr == 0; ++i, ++j){
                curr = curr ^ nums[i] ^ nums[j];
            }
            x = (curr != 0) ? curr : (x ^ nums[--k]);
        }
        return k + ctr;
    }
};
