class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cmax = 0;
        int maxim = 0;
        for(int i{}; i<gain.size(); ++i){
            cmax += gain[i];
            maxim = max(maxim, cmax);
        }
        return maxim;
    }
};
