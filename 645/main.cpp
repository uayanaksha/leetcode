class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v(nums.size() + 1, 0);
        int twice, missing;
        v[0] = false;
        for(int i=1; i<=nums.size(); ++i){
            v[nums[i-1]]++;
        }
        for(int i{}; i<=nums.size(); ++i){
            switch(v[i]){
                case 2: twice = i; break;
                case 0: missing = i; break;
            }
        }
        return {twice, missing};
    }
};
