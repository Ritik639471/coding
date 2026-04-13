// Last updated: 4/13/2026, 3:36:57 PM
bool cmp (vector<int>& a, vector<int>& b){
   return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& it) {
        sort(it.begin(),it.end());
        int n=it.size(),ans1=0,ans=0;
        int i=0,j=1;
        while(j<n){
            if(it[i][1]>it[j][0]){
                if(it[i][1]>it[j][1]) i=j;
                j++;
                ans++;
            }
            else{
                i=j;
                j++;
            }
        }
        // i=0;j=1;
        // sort(it.begin(), it.end(),cmp);
        // while(j<n){
        //     if(it[i][1]>it[j][0]){
        //         j++;
        //         ans1++;
        //     }
        //     else{
        //         i=j;
        //         j++;
        //     }
        // }
        return ans;
    }
};