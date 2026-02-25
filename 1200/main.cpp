class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int minim_diff = arr[1] - arr[0];
        for(int i=1; i<arr.size(); ++i){
            minim_diff = min(minim_diff, arr[i] - arr[i-1]);
        }
        vector<vector<int>> v;
        for(int i=1; i<arr.size(); ++i){
            if(arr[i] - minim_diff == arr[i-1]){
                v.push_back(vector<int>{arr[i-1], arr[i]});
            }
        }
        return v;
    }
};
