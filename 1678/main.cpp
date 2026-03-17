class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string s;
        for(int i{}; i<n; ++i){
            if(i + 1 < n && command[i] == '(' && command[i+1] == ')'){
                s += 'o';
            } else if(command[i] != '(' && command[i] != ')') {
                s += command[i];
            }
        }
        return s;
    }
};
