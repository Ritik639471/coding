// Last updated: 4/13/2026, 3:40:21 PM
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1 && j==n-1){dp[i][j]=grid[i][j];continue;}
                dp[i][j]=grid[i][j]+min((i+1!=m?dp[i+1][j]:INT_MAX),(j+1!=n?dp[i][j+1]:INT_MAX));
            }
        }
        return dp[0][0];
    }
};