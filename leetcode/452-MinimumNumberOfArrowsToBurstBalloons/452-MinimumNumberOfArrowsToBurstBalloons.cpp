// Last updated: 4/13/2026, 3:36:52 PM
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& ps) {
        sort(ps.begin(),ps.end());
        int n=ps.size();
        int i=0,j=1,ans=1;
        while(j<n){
            if(ps[i][1]>=ps[j][0]){
                if(ps[i][1]>ps[j][1]) i=j;
                j++;
            }
            else{
                i=j;
                ans++;
                j++;
            }
        }
        return ans;
    }
};