class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        using ll = long long;
        const int n = nums.size();
        vector<ll> mem(k, LLONG_MAX>>1);
        ll prefix{}, maxim=LLONG_MIN;
        mem[k-1] = 0;
        for(int i{}; i<n; ++i){
            prefix += nums[i];
            ll& minim = mem[i%k];
            maxim = max(maxim, prefix - minim);
            minim = min(prefix, minim);
        }
        return maxim;
    }
};
