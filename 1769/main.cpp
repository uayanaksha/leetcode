class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> v(n, 0);
        int ctr{}, acc{};
        for(int i{}; i<n; ++i){
            v[i] += acc;
            ctr += boxes[i] - '0';
            acc += ctr;
        }
        ctr = 0;
        acc = 0;
        for(int i=n-1; i>=0; --i){
            v[i] += acc;
            ctr += boxes[i] - '0';
            acc += ctr;
        }
        return v;
    }
};
