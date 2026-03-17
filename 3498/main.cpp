class Solution {
public:
    int reverseDegree(string s) {
        int n = static_cast<int>(s.size());
        int sop{};
        for(int i{}; i<n;){
            int revVal = static_cast<int>('z' - s[i]) + 1;
            sop += (++i)*revVal;
        }
        return sop;
    }
};
