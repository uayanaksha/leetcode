class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total_apples{}, total_capacity{}, ctr{};
        vector<int> mem(51, 0);
        for (auto& v : apple) {
            total_apples += v;
        }
        for (auto& v : capacity) {
            mem[v]++;
        }
        for (int i = 50; i >= 0 && total_capacity < total_apples; --i) {
            if(mem[i] == 0) {
                continue;
            }
            int val = mem[i]*i;
            if(total_capacity + val <= total_apples){
                total_capacity = total_capacity + val;
                ctr = ctr + mem[i];
                mem[i] = 0;
            } else {
                total_capacity = total_capacity + i;
                ctr = ctr + 1;
                mem[i] = mem[i] - 1;
            }
            ++i;
        }
        return ctr;
    }
};
