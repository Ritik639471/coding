// Last updated: 4/13/2026, 3:33:15 PM
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=(m+n)*mean;
        for(int i=0;i<m;i++){
            sum-=rolls[i];
        }
        if(sum>n*6||sum<n) return {};
        vector<int>ans(n);
        if(sum==n*6) {
            for(int i=0;i<n;i++){
                ans[i]=6;
            }
            return ans;
        }
        int a=sum%n,b=sum/n;
        for(int i=0;i<n;i++){
           if(i<a) ans[i]=b+1;
           else ans[i]=b ;
        }
        return ans;
    }
};