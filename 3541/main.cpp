class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(256, 0);
        vector<int> maxim(2, 0);
        for(const auto& c: s){
            ++v[static_cast<unsigned>(c)];
        }
        vector<int> found(256, -1);
        string vowels = "aeiou";
        for(char l = 'a'; l <= 'z'; ++l){
            int flag = found[l];
            if(flag < 0){
                flag = found[l] = vowels.find(l) != string::npos ? 1 : 0;
            }
            maxim[flag] = max(maxim[flag], v[l]);
        }
        return maxim[0] + maxim[1];
    }
};
