class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if (numRows == 1 || n <= 2)
            return s;
        string m;
        int d = 2 * numRows - 2;
        for(int i{}; i<numRows; ++i){
            for(int j{i}; j<n; j += d){
                m += s[j];
                int idx = j+d-2*i;
                if(0 < i && i < numRows-1 && idx < n) {
                    m+= s[idx];
                }
            }
        }
        return m;
    }
};
