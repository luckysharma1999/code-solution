#include<unordered_map>
#include<list>
#include<queue>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    unordered_map<int,list<int>> adj;
    for(int i =0;i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
    }
    
    //find all indegrees
    vector<int> indegree(v);
    for(auto i:adj){
        for(auto j :i.second){
            indegree[j]++;
        }
    }
    // 0 indegree valo ko push kr do
    queue<int> q;
    for(int i =0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    
    //apply bfs
    vector<int> ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(auto child : adj[front]){
            indegree[child]--;
            if(indegree[child]==0){
                q.push(child);
            }
        }
    }
    return ans;
}