class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum=duration;
        for(int i{}; i<timeSeries.size()-1; ++i){
            int diff = timeSeries[i+1] - timeSeries[i];
            if( diff < duration){
                sum += diff;
            } else {
                sum += duration;
            }
        }
        return sum;
    }
};
