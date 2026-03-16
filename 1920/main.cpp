class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        vector<int> v(n);
        for(int i{}; i<n; ++i){
            v[i] = nums.at(nums.at(i));
        }
        return v;
    }
};
