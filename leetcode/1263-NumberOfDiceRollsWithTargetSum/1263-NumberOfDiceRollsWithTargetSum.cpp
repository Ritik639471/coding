// Last updated: 4/13/2026, 3:34:12 PM
class Solution {
public:
    int a = 1000000007;
    vector<vector<int>> dp;
    void help(int n, int k, int target) {
        if (n == 0) {
            dp[target][n] = 0;
            return;
        }
        int ans = 0;
        for (int i = 1; i <= k; i++) {
            if(target==i&&n==1){
                ans=(ans+1)%a;
                break;
            }
            if (target - i > 0) {
                if(dp[target - i][n-1]==-1) help(n - 1, k, target - i);
                ans = (ans + dp[target - i][n-1]%a) % a;
            }
        }
        dp[target][n] = ans;
        return;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp=vector<vector<int>>(target+1,vector<int>(n+1,-1));
        help(n, k, target);
        return dp[target][n];
    }
};