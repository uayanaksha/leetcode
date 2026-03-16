class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        vector<int> v(2*n);
        for(int i{}; i<n; ++i){
            v[n+i] = v[i] = nums[i];
        }
        return v;
    }
};
