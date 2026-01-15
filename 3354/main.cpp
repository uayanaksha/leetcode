class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        const int n = nums.size();
        vector<int> zidx;
        if(nums[0]==0) zidx.push_back(0);
        for(size_t i=1; i<n; ++i){
            if(nums[i] == 0) zidx.push_back(i);
            nums[i] += nums[i-1];
        }
        auto ctr{0uz};
        auto sum{nums.back()};
        for(int z: zidx){
            if(2*nums[z] == sum) ctr += 2;
            if(abs(2*nums[z] - sum) == 1) ctr++;
        }
        return ctr;
    }
};
