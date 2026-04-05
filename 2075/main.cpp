class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int cells = encodedText.size();
        int cols = cells / rows;
        int ctrEnc = 0, ctrStr = 0;
        string str;
        for (int i{}; i < cells; ++i) {
            char c = encodedText[i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                ++ctrEnc;
            }
        }
        for (int i{}; i < cols && ctrEnc > ctrStr; ++i) {
            for (int j = i; j < cells && ctrEnc > ctrStr; j += cols + 1) {
                char c = encodedText[j];
                str += c;
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                    ++ctrStr;
                }
            }
        }
        return str;
    }
};
