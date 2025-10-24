class Solution {
public:
    string toHex(int num) {
        return format("{:x}", static_cast<unsigned int>(num));
    }
};
