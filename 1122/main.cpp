class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> mem(1001, 0);
        int maxim=1000;
        int minim=0;
        int i{};
        for(int &n: arr1){
            maxim = max(maxim, n);
            minim = min(minim, n);
            mem[n]++;
        }
        for(int &n: arr2){
            while(mem[n]--){
                arr1[i++] = n;
            }
        }
        while(minim <= maxim){
            if(mem[minim] > 0) {
                while(mem[minim]--){
                    arr1[i++] = minim;
                }
            }
            ++minim;
        }
        return arr1;
    }
};
