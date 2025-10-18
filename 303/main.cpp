class NumArray {
public:
    vector<vector<int>> mem;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        mem.resize(n, vector(n, 0));
        for(int l{}; l<n; ++l){
            int sum{};
            for(int r{l}; r<n; ++r){
                sum += nums[r];
                mem[l][r] = sum;
            }
        }
    }

    int sumRange(int left, int right) {
        return mem[left][right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
