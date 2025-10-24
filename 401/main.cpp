class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> v;
        for(int i=0; i<1024; i++){
            int h = i >> 6;
            int m = i & 63;
            if(__builtin_popcount(i) != turnedOn 
            || h > 11 || m > 59) continue;
            v.push_back(format("{}:{:02}", h, m));
        }
        return v;
    }
};
