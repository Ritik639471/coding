// Last updated: 4/13/2026, 3:40:48 PM
class Solution {
public:
    vector<int> dp;
    int help(vector<int>& nums,int i,int n){
        if(i==n-1) return 1;
        if(dp[i]!=-1) return dp[i];
        int ans=INT_MAX;
        for(int j=i+1;j<=i+nums[i];j++){
            if(dp[j]==-1) dp[j]=help(nums,j,n);
            ans=min(ans,dp[j]);
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n-1;
        dp=vector<int>(n+2,-1);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i]==0) continue;
            dp[i]=INT_MAX;
            for(int j=1;j<=nums[i];j++){
                if(j+i>n) break;
                if(dp[j+i]!=-1&&dp[j+i]!=INT_MAX) {
                    dp[i]=min(dp[i],1+dp[i+j]);
                }
            }
        }
        return dp[0];
    }
};