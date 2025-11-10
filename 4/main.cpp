class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l{}, r{};
        vector<double> v;
        while(l<nums1.size() && r<nums2.size()){
            if(nums1[l] <= nums2[r]) v.push_back(nums1[l++]);
            else v.push_back(nums2[r++]);
        }
        while(l<nums1.size()){
            v.push_back(nums1[l++]);
        }
        while(r<nums2.size()){
            v.push_back(nums2[r++]);
        }
        int n = v.size();
        double median = v[n/2];
        if(~(n&1)) median = (median + v[(n-1)/2])/2;
        return median;
    }
};
