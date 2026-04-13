// Last updated: 4/13/2026, 3:32:20 PM
class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n1=grid.size(),n2=grid[0].size();
        bool ans=true;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
               if(i+1<n1){ if(grid[i][j] != grid[i + 1][j]){ ans= false;}}
               if(j+1<n2){ if(grid[i][j] == grid[i][j+1]) {ans= false;}}
           }
        }
        return ans;
    }
};