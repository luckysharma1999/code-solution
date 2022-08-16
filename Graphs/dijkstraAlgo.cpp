#include<unordered_map>
#include<set>
#include<list>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {    //make adj with given weight/distance between the edges
    unordered_map<int, list<pair<int,int>>> adj;
    for(int i=0;i<edges;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];
        
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));        
    }
    
    //make a distance vector to store the distance of each node from source
    vector<int> distance(vertices);
    //initialize every element of distance with INT_MAX
    for(int i=0;i<vertices;i++)
        distance[i]=INT_MAX;
    //make a set to store the distance of node and node itself
    set<pair<int,int>> s;
    //now add source distance and source itself to set
    s.insert(make_pair(0,source));
    //update the distance vector at source
    distance[source]=0;
    
    //run a while loop
    while(!s.empty()){
        //store the top value an remove it from set
        auto top = *(s.begin());
        //store the distance and node
        int nodedist = top.first;
        int node = top.second;
        s.erase(s.begin());
        
        //check for each child of node
        for(auto child : adj[node]){
            if(nodedist + child.second<distance[child.first]){
                //find if for min distance is there any record of node is present
                //and remove it
                auto record = s.find(make_pair(distance[child.first],child.first));
                if(record!=s.end()){
                    s.erase(record);
                }
                //update distance
                distance[child.first]=nodedist + child.second;
                
                //insert the record in  set
                s.insert(make_pair(distance[child.first],child.first));
            }
        }
        
        
    }
    return distance;
}
