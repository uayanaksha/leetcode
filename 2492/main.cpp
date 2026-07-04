class Solution {
public:
    void getConnectedComponent(int n, vector<vector<int>>& roads, vector<bool>& v){
        vector<vector<int>> adj(n+1);
        for(int i{}; i<roads.size(); ++i){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        v[1] = true;
        vector<int> st = {1};
        while(!st.empty()){
            int c = st.back();
            st.pop_back();
            for(int i: adj[c]){
                if(v[i]) continue;
                v[i] = true;
                st.push_back(i);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        int minim = ~(1<<31);
        vector<bool> v(n+1, false);
        getConnectedComponent(n + 1, roads, v);
        for(int i{}; i<roads.size(); ++i){
            if(!v[roads[i][0]] || !v[roads[i][1]]) 
                continue;
            minim = min(minim, roads[i][2]);
        }
        return minim;
    }
};
