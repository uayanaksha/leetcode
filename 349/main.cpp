class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end()), s2(nums2.begin(), nums2.end());
        vector<int> v;
        if(s2.size() < s1.size()){
            s1.swap(s2);
        }
        for(int i: s1){
            if(s2.find(i) != s2.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};
