class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> mem(101, 0);
        vector<int> cp(nums.begin(), nums.end());
        sort(cp.begin(), cp.end());
        for(int i{}; i<cp.size(); ++i){
            if(i > 0 && cp[i] == cp[i-1]) continue;
            mem[cp[i]] = i;
        }
        for(int i{}; i<cp.size(); ++i){
            cp[i] = mem[nums[i]];
        }
        return cp;
    }
};
