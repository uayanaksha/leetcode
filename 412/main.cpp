class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v(n, "FizzBuzz");
        for(int i{1}; i<=n; ++i){
            if(i%15 == 0){
                continue;
            } else if (i%5 == 0){
                v[i-1] = "Buzz";
            } else if (i%3 == 0){
                v[i-1] = "Fizz";
            } else {
                v[i-1] = to_string(i);
            }
        }
        return v;
    }
};
