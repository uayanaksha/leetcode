class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<long> mem(3, LONG_MIN);
        for(int num: nums){
            if(mem[0] == num || mem[1] == num || mem[2] == num) continue;
            if(num > mem[0]){
                mem[2] = mem[1];
                mem[1] = mem[0];
                mem[0] = num;
            } else if(num > mem[1]){
                mem[2] = mem[1];
                mem[1] = num;
            } else if(num > mem[2]){
                mem[2] = num;
            }
        }
        if(mem[2] == LONG_MIN) mem[2] = mem[0];
        return mem[2];
    }
};
