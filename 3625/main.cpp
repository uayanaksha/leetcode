class Solution {
public:
    template <typename T> using um = unordered_map<int, T>;
    using ll = long long;
    int countTrapezoids(vector<vector<int>>& points) {
        const int n = points.size();
        um<um<int>> t, v;
        for (int i{}; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int x1 = points[i][0],
                x2 = points[j][0],
                y1 = points[i][1],
                y2 = points[j][1];
                int dx = x2 - x1;
                int dy = y2 - y1;
                if (dx < 0 || (dx == 0 && dy < 0)) {
                    dx = -dx, dy = -dy;
                }
                int g = gcd(dx, abs(dy));
                int sx = dx / g;
                int sy = dy / g;
                int d = sx * y1 - sy * x1;
                int k1 = (sx << 12) | (sy + 2000);
                int k2 = (dx << 12) | (dy + 2000);
                ++t[k1][d];
                ++v[k2][d];
            }
        }
        int ct = count(t);
        int cv = count(v);
        return ct - cv / 2;
    }
    int count(um<um<int>>& mp) {
        ll r{};
        for (auto& [_, inner] : mp) {
            ll sum = 0;
            for (auto& [_, val] : inner) {
                sum += val;
            }
            for (auto& [_, val] : inner) {
                r += val * (sum -= val);
            }
        }
        return r;
    }
};
