class Solution {
public:
    int numberOfWays(string corridor) {
        int MOD = 1e9 + 7, n = corridor.size(), _0{}, _1{}, _2{1};
        for (int i{}; i < n; ++i) {
            if (corridor[i] == 'P') {
                _2 = (_2 + _0) % MOD;
                continue;
            }
            _0 = _1;
            swap(_1, _2);
        }
        return _0;
    }
};
