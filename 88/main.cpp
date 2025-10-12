class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1{}, p2{};
        vector<int> nums;
        while (p1 < m && p2 < n) {
            if (nums1[p1] < nums2[p2]) {
                nums.push_back(nums1[p1++]);
            } else {
                nums.push_back(nums2[p2++]);
            }
        }
        while (p1 < m) {
            nums.push_back(nums1[p1++]);
        }
        while (p2 < n) {
            nums.push_back(nums2[p2++]);
        }
        nums1.swap(nums);
    }
};
