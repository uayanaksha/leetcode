class Solution {
public:
    using vi = vector<int>;
    using di = deque<int>;
    const int MOD = 1e9 + 7;
    int countPartitions(vector<int>& nums, int k) {
        int n = nums.size();
        vi dp(n+2);
        dp[n] = 1;
        dp[n+1] = 0;
        di mn, mx;
        int p = n;
        for(int i=n-1; i>=0; --i){
            
            while(!mn.empty() && nums[mn.back()] >= nums[i]){
                mn.pop_back();
            }
            mn.push_back(i);

            while(!mx.empty() && nums[mx.back()] <= nums[i]){
                mx.pop_back();
            }
            mx.push_back(i);

            while(!mx.empty() && !mn.empty() && nums[mx.front()] - nums[mn.front()] > k){
                if(mx.front() < mn.front()){
                    p = mn.front();
                    mn.pop_front();
                } else {
                    p = mx.front();
                    mx.pop_front();
                }
            }

            dp[i] = dp[i+1]*2 - dp[p+1];
            if(dp[i] < 0){
                dp[i] += MOD;
            } else if (dp[i] >= MOD){
                dp[i] -= MOD;
            }
        }
        int r = dp[0] - dp[1];
        if(r < 0){
            r += MOD;
        }
        return r;
    }
};
