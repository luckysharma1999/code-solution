vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    //creating an array of vectors to store the ans
    vector<int> ans[n];// this will store all adjacent node corresponding on indexes.
    
    for(int i = 0; i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        ans[u].push_back(v);
        ans[v].push_back(u);
    
    }
    
    vector<vector<int>> adj(n);
    //entering neigbours to adj
    for(int i =0; i<n;i++){
        adj[i].push_back(i);
        for(int j =0;j<ans[i].size();j++){
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}