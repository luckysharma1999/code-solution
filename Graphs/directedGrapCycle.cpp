#include<unordered_map>
#include<list>

bool dfsCycle(int node,unordered_map<int,list<int>> &adj,unordered_map<int,bool> &visited,
    unordered_map<int,bool> &dfsVis){
    
    visited[node]=true;
    dfsVis[node]=true;
    for(auto child:adj[node]){
        if(!visited[child]){
             bool cycleDetected = dfsCycle(child,adj,visited,dfsVis);
            if(cycleDetected){
                return true;
            }
        }else if(dfsVis[child]){
            //visited
             return true;
        }
       
    }
    dfsVis[node]=false;
    return false;
    
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int,list<int>> adj;
    for(int i =0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
    }
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsVis;
    
    for(int i =0;i<n;i++){
        if(!visited[i]){
           bool ans= dfsCycle(i,adj,visited,dfsVis);
            if(ans)
                return true;
        }
    }
    return false;
}