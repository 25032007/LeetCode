class Solution {
public:

    int time;
    vector<int> dt, low;

    void dfs(int u, int parent, vector<bool>& vis, vector<vector<int>>& adj, vector<vector<int>>& bridges){
        vis[u] = true;
        dt[u] = low[u] = ++time;

        for(int v : adj[u]){
            if(!vis[v]){
                dfs(v, u, vis, adj, bridges);
                low[u] = min(low[u], low[v]);

                if(low[v] > dt[u]){
                    bridges.push_back({u, v});
                }
            }

            else if(v != parent){
                low[u] = min(low[u], dt[v]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);

        for(int i=0; i<connections.size(); i++){
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        time = 0;
        dt.resize(n,-1);
        low.resize(n,-1);

        vector<vector<int>> bridges;
        vector<bool> vis(n, false);

        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(i, -1, vis, adj, bridges);
            }
        }
        return bridges;
    }
};