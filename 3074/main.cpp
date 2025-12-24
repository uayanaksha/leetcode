class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total_apples{}, minim_boxes{};
        sort(capacity.begin(), capacity.end(), greater<int>());
        for(auto &v: apple){ 
            total_apples += v; 
        }
        for(auto &v: capacity){ 
            total_apples -= v;
            ++minim_boxes;
            if(total_apples <= 0){
                return minim_boxes;
            }
        }
        return capacity.size();
    }
};
