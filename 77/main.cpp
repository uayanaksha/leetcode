class Solution {
    template<typename T>
    using v = vector<T>;

    void fn(int x, int n, int k, v<int>&& combination, v<v<int>>& result){
        if(k == 0){
            result.push_back(combination);
            return;
        }
        for(int i=x; i<=n; ++i){
            combination.push_back(i);
            fn(i+1, n, k-1, std::move(combination), result);
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        v<v<int>> result;
        fn(1, n, k, vector<int>(), result);
        return result;
    }
};
