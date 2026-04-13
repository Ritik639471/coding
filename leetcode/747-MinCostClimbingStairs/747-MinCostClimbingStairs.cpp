// Last updated: 4/13/2026, 3:35:44 PM
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        dp[n]=0;
        dp[n-1]=cost[n-1];
        for(int i=n-2;i>=0;i--){
            dp[i]=cost[i] + (dp[i+1]<dp[i+2]?dp[i+1]:dp[i+2]);
        }
        return dp[0]<dp[1]?dp[0]:dp[1];
    }
};