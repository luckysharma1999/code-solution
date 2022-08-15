#include <bits/stdc++.h>
using namespace std;

const int N= 1e5 +10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    //take action after entering vertex
	vis[vertex]=true;
	for(auto child: g[vertex]){
        //take action before entering child

		if(vis[child]) continue;
		dfs(child);
        //take action after entering child
	}
    //teke action before exiting vertex
}

int main() {
	int n, e;
	cin>>n>>e;
	for(int i=0;i<e;++i){
		int v1,v2;
		cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);

	}
	int ct =0;
	for(int i =1;i<=n;i++){
		if(vis[i]) continue;
		dfs(i);
		ct++;
	}
cout<<ct;
}

//one more dfs
void dfs(int node,unordered_map<int,list<int>> &adj,unordered_map<int, bool> &visited, vector<int> &component ){
    component.push_back(node);
    visited[node]= true;
    // for every neighbour of node recursive call dfs
    for(auto child: adj[node]){
        if(visited[child]==1) continue;
        dfs(child,adj,visited,component);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    //make graph
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    
    for(int i = 0;i<V;i++){
        if(visited[i]==0){
            vector<int> component;
            dfs(i,adj,visited,component);
            ans.push_back(component);
        }
    }
    return ans;
}