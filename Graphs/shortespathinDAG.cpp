//1. get the tropical sort order in a stack(dfs)
//2. initialize a distance(vector/array) with INT_MAX and after that distance[source]=0
//3. for every element in stack we check
//  if dist[top]!=INT_MAX
// if above condition is true check for its neighbours
//  dist[top] + weight(top->neighbour) <dist[neigbour]
//     if the given condition is true set the dist[neighbour] to dist[top] + weight(top->neighbour)
