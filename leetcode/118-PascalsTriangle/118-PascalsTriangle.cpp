// Last updated: 4/13/2026, 3:39:19 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows);
        for(int i=0;i<numRows;i++){
            vector<int> arr(i+1);
            dp[i]=arr;
            for(int j=0;j<=i;j++){
                if(i==0||j==0||i==j) dp[i][j]=1;
                else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]); 
            }
        }
        return dp;
    }
};