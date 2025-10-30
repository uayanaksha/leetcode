class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mem(10003, 0), v;
        for(int i{}; i<nums2.size(); ++i){
            int val = -1;
            for(int j{i}; j<nums2.size(); ++j){
                if(nums2[j] > nums2[i]){
                    val = nums2[j];
                    break;
                }
            }
            mem[nums2[i]] = val;
        }
        for(int n: nums1){
            v.push_back(mem[n]);
        }
        return v;
    }
};
