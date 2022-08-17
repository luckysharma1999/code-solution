class Solution {
public:
//recursion
int solve(vector<int> &cost,int n){
    if(n==0)
        return cost[0];
    if(n==1)
        return cost[1];
    int ans = cost[n] + min(solve(cost,n-1),solve(cost,n-2));
    return ans;
}
//top-down DP
    int solve2(vector<int> &cost,int n,vector<int> &dp){
    if(n==0)
        return cost[0];
    if(n==1)
        return cost[1];
        if(dp[n]!=-1){
            return dp[n]; 
        }
    dp[n] = cost[n] + min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
    return dp[n];
}

//tabulation method
int solve3(vector<int> cost,int n){
    vector<int> dp(n+1);
    //base case analyse
    dp[0]=cost[0];
    dp[1]=cost[1];

    //run a for loop from 2 to n-1
    for(int i =2;i<=n-1;i++){
        dp[i]=cost[i] + min(dp[i-1],dp[i-2]);
    }
    return dp[n];
}

int minCostClimbingStairs(vector<int>& cost) {
    // int n = cost.size();
    // int ans = min(solve(cost,n-1),solve(cost,n-2));
    // return ans;
    
    int n = cost.size();
    vector<int> dp(n+1,-1);
    //why n+1?becoz we have to store the value of 0 as well
    //eg n=3 means we have to reach 3rd stair but indexing of array is 0 1 2
    //so we need n+1 array size 0 1 2 3 to store the cost at index 3 and return it
    
        dp[n] = min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
    return dp[n];
    
}
};