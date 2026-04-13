// Last updated: 4/13/2026, 3:39:17 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> dp(rowIndex+1,0);
        int prev,pre;
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                prev=dp[j];
                if(j==0||j==i) dp[j]=1;
                else{
                    dp[j]+=pre;
                }
                pre=prev;
            }
        }
        return dp;
    }
};