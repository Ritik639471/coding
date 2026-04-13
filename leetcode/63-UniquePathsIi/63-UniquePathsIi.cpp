// Last updated: 4/13/2026, 3:40:22 PM
class Solution {
public:
    vector<vector<int>> dp;
    int help(int m,int n,int i,int j,vector<vector<int>>& obstacleGrid){
       if(obstacleGrid[i-m][j-n]==1) return dp[m][n]=0;
       if(dp[m][n]!=-1) return dp[m][n];
       if(m==0&&n==0) return dp[m][n]=0;
       if(m==1 && n==1){ 
        if(obstacleGrid[i-m][j-n]==1) return dp[m][n]=0;
        else return dp[m][n]=1;
        }
       if(m==1){
         if(dp[m][n-1]==-1) dp[m][n-1]=help(m,n-1,i,j,obstacleGrid);
         return dp[m][n-1];
       }
       if(n==1){
         if(dp[m-1][n]==-1) dp[m-1][n]=help(m-1,n,i,j,obstacleGrid);
         return dp[m-1][n];
       }
       if(dp[m][n-1]==-1) dp[m][n-1]=help(m,n-1,i,j,obstacleGrid);
       if(dp[m-1][n]==-1) dp[m-1][n]=help(m-1,n,i,j,obstacleGrid);
       return dp[m][n-1]+dp[m-1][n];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int m=obstacleGrid.size(),n=obstacleGrid[0].size();
       dp=vector<vector<int>> (m+1,vector<int>(n+1,-1));
       return help(m,n,m,n,obstacleGrid);
    }
};