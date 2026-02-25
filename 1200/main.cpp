class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> v;
        int min_diff = 1 << 30;
        for (int i = 1; i < arr.size(); ++i) {
            int diff = arr[i] - arr[i - 1];
            if (diff > min_diff)
                continue;
            if (diff < min_diff) {
                v = {};
                min_diff = diff;
            }
            v.push_back(vector<int>{arr[i - 1], arr[i]});
        }
        return v;
    }
};
