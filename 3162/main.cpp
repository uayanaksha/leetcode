class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ctr{};
        for(int i{}; i<nums1.size(); ++i){
            for(int j{}; j<nums2.size(); ++j){
                if(nums1[i] % (nums2[j]*k) == 0){
                    ++ctr;
                }
            }
        }
        return ctr;
    }
};
