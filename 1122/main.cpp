class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> mem(1001, 0);
        for(int &n: arr1){
            mem[n]++;
        }
        int i{};
        for(int &n: arr2){
            while(mem[n]--){
                arr1[i++] = n;
            }
        }
        for(int j{}; j<=1000; ++j){
            if(mem[j] <= 0) continue;
            while(mem[j]--){
                arr1[i++] = j;
            }
        }
        return arr1;
    }
};
