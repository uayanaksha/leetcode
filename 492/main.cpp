class Solution {
public:
    vector<int> constructRectangle(int area) {
        int l = area, w = 1;
        for(int i=2; i*i<=area; ++i){
            if(area%i == 0){
                int e = area / i;
                l = max(e, i);
                w = min(e, i);
            }
        }
        return vector<int>{l, w};
    }
};
