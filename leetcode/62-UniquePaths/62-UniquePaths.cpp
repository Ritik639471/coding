// Last updated: 4/13/2026, 3:40:24 PM
class Solution {
public:
    vector<vector<int>> dp;
    int help(int m,int n){
       if(dp[m][n]!=-1) return dp[m][n];
       if(m==1 || n==1) return 1;
       if(dp[m][n-1]==-1) dp[m][n-1]=help(m,n-1);
       if(dp[m-1][n]==-1) dp[m-1][n]=help(m-1,n);
       return dp[m][n-1]+dp[m-1][n];
    }
    int uniquePaths(int m, int n) {
       dp=vector<vector<int>> (m+1,vector<int>(n+1,-1));
       dp[1][1]=1;
       return help(m,n);
    }
};