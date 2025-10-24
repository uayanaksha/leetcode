class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for(int i{1}; i<nums.front(); ++i){
            res.push_back(i);
        }
        for(int i{1}; i<nums.size(); ++i){
            if(nums[i]-nums[i-1] <= 1) continue;
            for(int j{nums[i-1]+1}; j<nums[i]; ++j){
                res.push_back(j);
            }
        }
        for(int i{nums.back() + 1}; i<=nums.size(); ++i){
            res.push_back(i);
        }
        return res;
    }
};
