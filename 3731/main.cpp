class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v(101, 0);
        vector<int> u;
        int maxim = 1<<31;
        int minim = ~(1<<31);
        for(int i{}; i<nums.size(); ++i){
            maxim = max(maxim, nums[i]);
            minim = min(minim, nums[i]);
            v[nums[i]]++;
        }
        for(int i=minim; i<=maxim; ++i){
            if(v[i] == 0){
                u.push_back(i);
            }
        }
        return u;
    }
};
