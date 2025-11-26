class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        char c = letters.front();
        for (int i{}; i < n; ++i) {
            if (letters[i] <= 'z' && target < letters[i] &&
                (letters[i] < c || c <= target)) {
                c = letters[i];
            }
        }
        return c;
    }
};
