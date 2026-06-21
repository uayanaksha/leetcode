/*
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) return 0;
        int distance = 0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); ++i){
            distance = max(distance, nums[i] - nums[i-1]);
        }
        return distance;
    }
};
*/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ctr = 0, maxelem = 0;
        for(int i{}; i<costs.size(); ++i){
            maxelem = max(maxelem, costs[i]);
        }
        vector<int> v(maxelem+1, 0);
        for(int i{}; i<costs.size(); ++i){
            v[costs[i]]++;
        }
        for(int i{}; i<v.size(); ++i){
            if(!v[i]) continue;
            if((long long)v[i]*i <= coins){
                coins = coins - v[i]*i;
                ctr += v[i];
            } else {
                ctr += (coins / i);
                break;
            }
        }
        return ctr;
    }
};
