class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int ctr{}, i{};
        while(i<citations.size() && citations[i] == 0){
            ++i;
        }
        for(; i<citations.size() ; ++i){
            if(i+1 <= citations[i]) ++ctr;
        }
        return ctr;
    }
};
