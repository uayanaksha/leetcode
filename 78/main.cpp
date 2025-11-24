class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> o;
        int n = nums.size();
        int powset_size = 1<<n;
        for(int i{}; i<powset_size; i++){
            vector<int> inner;
            for(int j{}; j < n; j++){
                if((i >> j) & 1){
                    inner.push_back(nums[j]);
                }
            }
            o.push_back(inner);
        }
        return o;
    }
};
