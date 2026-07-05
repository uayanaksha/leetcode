class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ctr=0;
        if(flowerbed.size() < 2) {
            ctr += flowerbed[0] ? 0 : 1;
            return n <= ctr;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            ++ctr;
        }
        for(int i=1; i+1<flowerbed.size(); ++i){
            if(flowerbed[i] == 0 
            && flowerbed[i-1] == 0 
            && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                ++ctr;
            }
        }
        if(flowerbed[flowerbed.size() -1] == 0 && flowerbed[flowerbed.size() - 2] == 0){
            ++ctr;
        }
        return n <= ctr;
    }
};
