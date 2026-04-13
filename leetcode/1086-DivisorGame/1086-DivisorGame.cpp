// Last updated: 4/13/2026, 3:34:30 PM
class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n+1,false);
        for(int i=2;i<=n;i++){
            for(int j=i-1;j>0;j--){
                if(i%j==0&&dp[i-j]==false) {
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};