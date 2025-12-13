class Solution {
public:
    using vb = vector<bool>;
    using vi = vector<int>;
    using vs = vector<string>;
    vs validateCoupons(vs& code, vs& businessLine, vb& isActive) {
        int n = code.size(); vi idxs; vs mem; smatch sm;
        regex c_pattern("[a-zA-Z0-9_]+");
        regex bl_pattern("(electronics|grocery|pharmacy|restaurant){1}");
        for (int i{}; i < n; ++i) {
            if (isActive[i] &&
                regex_match(code[i], sm, c_pattern) &&
                regex_match(businessLine[i], sm, bl_pattern)) {
                idxs.push_back(i);
            }
        }
        sort(idxs.begin(), idxs.end(),
             [&code, &businessLine](const int& a, const int& b) {
                 return businessLine[a] == businessLine[b] &&
                            code[a] < code[b] ||
                        businessLine[a] < businessLine[b];
             });
        for (int idx : idxs) {
            mem.push_back(code[idx]);
        }
        return mem;
    }
};
