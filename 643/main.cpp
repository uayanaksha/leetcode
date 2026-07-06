class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0;
        int r = k;
        double sum = 0;
        for(int i{}; i<k; ++i){
            sum += nums[i];
        }
        double maxim = sum/k;
        while(r < nums.size()){
            sum -= nums[l++];
            sum += nums[r++];
            maxim = max(maxim, sum/k);
        }
        return maxim;
    }
};
