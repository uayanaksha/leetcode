class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num){
            int r = num%10;
            v.push_back(r);
            num /= 10;
        }
        sort(v.begin(), v.end());
        int r = (v[0] + v[1]) * 10 + (v[2] + v[3]);
        return r;
    }
};
