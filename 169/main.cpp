class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int maxim=INT_MAX, ctr={};
      for(int num: nums){
        if(ctr == 0){
          maxim = num;
          ++ctr;
        } else if(num != maxim){
          --ctr;
        } else {
          ++ctr;
        }
      }
      return maxim;
    }
};
