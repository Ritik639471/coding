// Last updated: 4/13/2026, 3:35:48 PM
int minCostClimbingStairs(int* cost, int costSize) {
    int dp[costSize+2];
    dp[costSize]=0;
    dp[costSize+1]=0;
    for(int i=0;i<costSize;i++){
        dp[costSize-i-1]=cost[costSize-i-1]+(dp[costSize-i]>dp[costSize-i+1]?dp[costSize-i+1]:dp[costSize-i]);
    }
    return dp[0]>dp[1]?dp[1]:dp[0];
}