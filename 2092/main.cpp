class Solution {
public:
    template <typename T> using v = vector<T>;
    template <typename T> using p = pair<T, T>;
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings,
                              int firstPerson) {
        v<v<pair<int, int>>> graph(n);
        for (int i{}; i < meetings.size(); ++i) {
            graph[meetings[i][0]].push_back({meetings[i][1], meetings[i][2]});
            graph[meetings[i][1]].push_back({meetings[i][0], meetings[i][2]});
        }
        priority_queue<p<int>, v<p<int>>, greater<p<int>>> pq;
        pq.push({0, 0});
        pq.push({0, firstPerson});
        v<int> r;
        v<bool> visited(n, false);
        while (!pq.empty()) {
            p<int> curr = pq.top();
            pq.pop();
            if (visited[curr.second]){
                continue;
            }
            visited[curr.second] = true;
            for (p<int> neighbour : graph[curr.second]) {
                if (!visited[neighbour.first] && curr.first <= neighbour.second) {
                    pq.push({neighbour.second, neighbour.first});
                }
            }
        }
        for (int i{}; i < n; ++i) {
            if (visited[i])
                r.push_back(i);
        }
        return r;
    }
};
