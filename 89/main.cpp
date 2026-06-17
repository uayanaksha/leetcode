class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> v;
        for(int i{}; i < 1<<n; ++i){
            v.push_back(i ^ (i/2));
        }
        return v;
    }
};
