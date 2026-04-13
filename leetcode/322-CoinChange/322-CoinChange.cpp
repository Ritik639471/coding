// Last updated: 4/13/2026, 3:37:21 PM
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int n=coins.size();
        dp[0]=0;
        for(int i=1;i<=amount;i++){
           int ans=INT_MAX;
            for(int j=0;j<n;j++){
                if(i-coins[j]>=0&&dp[i-coins[j]]!=-1){
                    ans=min(ans,1+dp[i-coins[j]]);
                }
            }
            if(ans!=INT_MAX) dp[i]=ans;
        }
        return dp[amount];
    }
};