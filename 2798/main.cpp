class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ctr{};
        for(int i{}; i < hours.size(); ++i){
            if(hours[i] < target) continue;
            ++ctr;
        }
        return ctr;
    }
};
