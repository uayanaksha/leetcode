class Solution {
    template<typename T> using v=vector<T>;
    int find(v<int>& mem, int val){
        return mem[val] < 0 ? val : mem[val] = find(mem, mem[val]);
    }
    void unite(v<int>& mem, int x, int y){
        x = find(mem, x);
        y = find(mem, y);
        if(x == y) return;
        if(mem[x] > mem[y]) swap(x, y);
        mem[x] += mem[y];
        mem[y] = x;
    }
public:
    v<int> findAllPeople(int n, v<v<int>>& meetings, int firstPerson) {
        sort(meetings.begin(), meetings.end(), [](const auto& a, const auto& b){ 
            return a[2] < b[2];
        });
        v<int> mem(n, -1), r;
        unite(mem, 0, firstPerson);
        for(int l{}, r{}; l<meetings.size();){
            for(; r < meetings.size() && meetings[l][2] == meetings[r][2]; ++r){
                unite(mem, meetings[r][0], meetings[r][1]);
            }
            for(int s=find(mem, 0); l<r; ++l){
                int x = meetings[l][0];
                int y = meetings[l][1];
                if(find(mem, x) != s) mem[x] = -1;
                if(find(mem, y) != s) mem[y] = -1;
            }
        }
        for(int i{}, s = find(mem, 0); i<n; ++i){
            if(find(mem, i) == s) r.push_back(i);
        }
        return r;
    }
};
