class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> v(101, 0);
        for(int i{}; i<nums.size(); ++i){
            if(nums[i] % k == 0){
                v[nums[i] / k]++;
            }
        }
        for(int i=1; i<101; ++i){
            if(v[i] == 0){
                return i*k;
            }
        }
        return 101;
    }
};
