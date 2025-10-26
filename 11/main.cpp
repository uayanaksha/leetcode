class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxim = 0;
        int l{}, r = height.size() - 1;
        while(l < r){
            int p = (r-l)*min(height[l], height[r]);
            if ( p > maxim ) {
                maxim = p;
            }
            if(height[l] <= height[r]) {
                ++l;
            } else {
                --r;
            } 
        }
        return maxim;
    }
};
