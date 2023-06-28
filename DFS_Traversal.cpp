void dfs(int node, vector<int> adj[],vector<int>&vis, vector<int>&vec){
    vis[node] = 1;
    vec.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,vec);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int> adj[V];
    for(int i = 0;i<E;i++){
        int u = edges[i][0], v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(V,0);
    vector<vector<int>> ans;
    for(int i = 0;i<V;i++){
        if(!vis[i]){
            vector<int> vec;
            dfs(i,adj,vis,vec);
            ans.push_back(vec);
        }
    }

    return ans;
}
