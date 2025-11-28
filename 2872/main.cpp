class Solution {
public:
    using ll = long long;
    int x{}, k;
    vector<vector<int>> adj;
    vector<int> V;
    ll dfs(int node, int parent){
        ll total = V[node];
        for(int neighbour: adj[node]){
            if(neighbour == parent) continue;
            total += dfs(neighbour, node);
        }
        int r = total % k;
        if(r == 0){
            ++x;
        }
        return r;
    }
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        this->k = k;
        this->V = values;
        adj.assign(n, {});
        for(auto &e: edges){
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ll r = dfs(0, -1);
        return this->x;
    }
};
