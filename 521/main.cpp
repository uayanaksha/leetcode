class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b) return -1;
        if(a.size() < b.size()) return findLUSlength(b, a);
        int n = a.size(), k = a.size(), size{}; 
        while(--k){
            for(int i{}, j=k; j<n; ++i, ++j){
                if(!b.contains(a.substr(i, j+1))){
                    size = j - i + 1;
                    break;
                }
            }
            if(size > 0) break;
        }
        return size;
    }
};
