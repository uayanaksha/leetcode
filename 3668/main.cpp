class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int m = static_cast<int>(order.size());
        int n = static_cast<int>(friends.size());
        vector<int> v(n);
        for(int j{}, k{}; j<m; ++j){
            for(int i{}; i<n; ++i){
                if(order[j] == friends[i]){
                    v[k++] = order[j];
                    break;
                }
            }
        }
        return v;
    }
};
