class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end(), less<>());
        int c = 1;
        for(int i=1; i<candyType.size(); ++i){
            if(candyType[i] == candyType[i-1])
                continue;
            c++;
        }
        return min(c, (int) candyType.size() /  2);
    }
};
