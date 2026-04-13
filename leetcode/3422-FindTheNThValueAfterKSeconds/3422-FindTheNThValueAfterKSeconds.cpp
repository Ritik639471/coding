// Last updated: 4/13/2026, 3:32:15 PM
class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<long long> ans(n,1);
        long long num=0;
        for(int i=0;i<k;i++){
            num=0;
            for(int j=0;j<n;j++){
                long long temp=ans[j];
                ans[j]=ans[j]%(1000000007)+num%(1000000007);
                num=num%(1000000007)+temp%(1000000007);
            }
        }
        return (int)((ans[n-1])%(1000000007));
    }
};