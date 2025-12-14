class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int ctr{};
        for(int i{}; i<seats.size(); ++i){
            ctr += abs(seats[i] - students[i]);
        }
        return ctr;
    }
};
