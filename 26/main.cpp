class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      vector<int> mem;
      mem.push_back(nums.front());
      int n = nums.size();
      for(int i=1; i<n; ++i){
        if(nums[i] != nums[i-1]){
          mem.push_back(nums[i]);
        }
      }
      nums.swap(mem);
      return  nums.size();
    }
};

