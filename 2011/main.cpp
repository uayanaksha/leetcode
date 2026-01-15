class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        auto X{0uz};
        for(auto operation: operations){
            if(operation == "++X" || operation == "X++") ++X; 
            else --X; 
        }
        return X;
    }
};
