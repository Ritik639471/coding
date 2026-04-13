// Last updated: 4/13/2026, 3:31:00 PM
class Solution {
public:
    int earliestFinishTime(vector<int>& lt, vector<int>& ld, vector<int>& wt, vector<int>& wd) {
        int n=lt.size(),m=wt.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=min(ans,max(lt[i]+ld[i],wt[j])+wd[j]);
                ans=min(ans,max(wt[j]+wd[j],lt[i])+ld[i]);
            }
        }
        return ans;
    }
};