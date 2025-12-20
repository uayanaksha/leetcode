class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ctr{}, i{};
        int cols = strs[0].size();
        auto fn = [&i](const string& a, const string& b) { return a[i] < b[i]; };
        for (; i < cols; ++i) {
            bool flag = !is_sorted(strs.begin(), strs.end(), fn);
            if (flag)
                ++ctr;
        }
        return ctr;
    }
};
