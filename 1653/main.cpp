class Solution {
public:
    int minimumDeletions(string s) {
        int _b{}, del{};
        for(const char& c:s){
            if(c == 'b'){
                ++_b;
            } else {
                if(_b > 0){
                    ++del;
                    --_b;
                }
            }
        }
        return del;
    }
};
