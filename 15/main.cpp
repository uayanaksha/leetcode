class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        for(int i{}; i<nums.size(); ++i){
            if(i>0 && nums[i] == nums[i-1]) {
                continue;
            }
            for(int j=i+1, k=nums.size()-1; j<k;){
                int sum = nums[i] + nums[j] + nums[k];
                if( sum > 0) {
                    --k;
                } else if (sum < 0){
                    j++;    
                } else {
                    v.push_back({nums[i], nums[j], nums[k]});
                    while(j<k && nums[j] == nums[j+1]){
                        ++j;
                    }
                    while(j<k && nums[k] == nums[k-1]){
                        --k;
                    }
                    j++;
                    k--;
                }
            }
        }
        return v;
    }
};
