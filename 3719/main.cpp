class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int res = -1;
        for(int l=0; l<n; ++l){
            if(n-l <= res) break;
            vector<set<int>> v(2, set<int>());
            for(int r = l; r<n; ++r){
                int idx = nums[r] % 2;
                if(!v[idx].contains(nums[r])) 
                    v[idx].emplace(nums[r]);
                if(v[0].size() == v[1].size()){
                    res = max(res, r-l);
                }
            }
        }
        return res + 1;
    }
};
