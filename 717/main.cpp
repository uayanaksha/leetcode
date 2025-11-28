class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size(), i{};
        for(; i<n-1; i++){
            if(bits[i]){ ++i; }
        }
        return i == --n;
    }
};
