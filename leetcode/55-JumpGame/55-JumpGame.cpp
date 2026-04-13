// Last updated: 4/13/2026, 3:40:35 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        vector<bool> dp(n,false);
        dp[n-1]=true;
        for(int i=n-2;i>=0;i--){
            if(nums[i]==0) {dp[i]=false; continue;}
            for(int j=1;j<=nums[i];j++){
                if(j+i>=n) break;
                if(dp[j+i]) {
                    dp[i]=true;
                }
            }
        }
        return dp[0];
    }
};