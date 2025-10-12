class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(1, 1);
        for (int i{}; i<rowIndex; ++i){
          vector<int> v2(1, 1);
          for(int j{1}; j<v.size(); ++j){
            v2.push_back(v[j] + v[j-1]);
          }
          v2.push_back(1);
          v.swap(v2);
        }
        return v;
    }
};
