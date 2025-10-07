class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      vector<int> v;
      for(int e: nums){
        if(e == val){
          continue;
        }
        v.push_back(e);
      }
      nums.swap(v);
      return nums.size();
    }
};
