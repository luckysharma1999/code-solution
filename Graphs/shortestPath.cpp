#include<unordered_map>
#include<queue>
#include<list>

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
    //make adj list
    unordered_map<int,list<int>> adj;
    for(int i =0 ; i<m;i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    //make a visited and parent structure to keep track
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    
    // bfs traversal
    queue<int> q;
    q.push(s);
    visited[s]= true;
    parent[s] = -1;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        
        for(auto child:adj[front]){
            if(!visited[child]){
                 visited[child] = true;
                 parent[child] = front;
                q.push(child);
            }
        }
    }
    //prepare shortest path
    vector<int> ans ;
    int currentNode=t;
    ans.push_back(t);
    while(currentNode!=s){
         currentNode=parent[currentNode];
        ans.push_back(currentNode);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
