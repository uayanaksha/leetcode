class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ctr{};
        vector<vector<int>> v;
        for(int i{}; i<nums.size(); ++i){
            if(v.empty()){
                v.push_back({nums[i], 1});
            } else if(nums[i] != v[v.size()-1][0]){
                v.push_back({nums[i], 1});
            }
        }
        for(int i=1; i<v.size()-1; ++i){
            if((v[i][0] > v[i-1][0] && v[i][0] > v[i+1][0])
            || (v[i][0] < v[i-1][0] && v[i][0] < v[i+1][0])){
                ctr += v[i][1];
            }
        }
        return ctr;
    }
};
