class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr{};
        int n = nums.size();
        vector<int> v(n, 0);
        for(int i{}; i<n; ++i){
          if(nums[i] == 0) continue;
          v[ptr++] = nums[i];
        }
        nums.swap(v);
    }
};
