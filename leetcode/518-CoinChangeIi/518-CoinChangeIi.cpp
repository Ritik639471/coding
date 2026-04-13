// Last updated: 4/13/2026, 3:36:37 PM
class Solution {
public:
    long long a=100000000000;
    int change(int x, vector<int>& coins) {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int n=coins.size();
    vector<long long> dp(x+1,0);
    dp[0]=1;
    
    for (int j = 0; j < n; j++) {
        for (int i = coins[j]; i <= x; i++) {
            dp[i] = (dp[i] + dp[i - coins[j]])%a;;
        }
    }
    return dp[x];
    }
};
