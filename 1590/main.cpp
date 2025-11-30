class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int target{}, n = nums.size();
        int pfx = 0, r = n, need;
        for (int num : nums) { 
            target = (target + num) % p; 
        }
        if (target == 0){ 
            return 0; 
        }
        unordered_map<int, int> mp;
        mp[0] = -1;
        for (int i{}; i < n; ++i) {
            pfx = (pfx + nums[i]) % p;
            need = (pfx - target + p) % p;
            if (mp.count(need)) {
                r = min(r, i - mp[need]);
            }
            mp[pfx] = i;
        }
        if(r == nums.size()) {
            r = -1;
        }
        return r;
    }
};
