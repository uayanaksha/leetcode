class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mapper = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int res = 0, digit, aux;
        for(int i{}; i < s.size(); i++){
            digit = mapper[s[i]];
            if(i+1 < s.size()){
                aux = mapper[s[i+1]];
                if(aux>digit){
                    res += (aux - digit);
                    i++;
                } else{
                    res += digit;
                }
            } else {
                res += digit;
            }
        }
        return res;
    }
};
