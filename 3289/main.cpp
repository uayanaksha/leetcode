class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> v;
        for(int num: nums){
            if(s.contains(num)) v.push_back(num);
            else {
                s.insert(num);
            }
        }
        return v;
    }
};
