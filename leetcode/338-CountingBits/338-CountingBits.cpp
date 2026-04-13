// Last updated: 4/13/2026, 3:37:18 PM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1,0);
        int num=2;
        for(int i=1;i<=n;i++){
            if(i==1) dp[i]=1;
            else if(i==2*num){
                dp[i]=1;
                num*=2;
            }
            else{
                dp[i]=1+dp[i-num];
            }
        }
        return dp;
    }
};