// Last updated: 4/13/2026, 3:38:19 PM
class Solution {
public:
    int ans=0,m,n;
    vector<vector<bool>>a;
    void help(vector<vector<char>>& grid,int i,int j){
        if(i<0||j<0||i>=m||j>=n||a[i][j]||grid[i][j]=='0') return;
        a[i][j]=true;
        help(grid,i-1,j);
        help(grid,i+1,j);
        help(grid,i,j-1);
        help(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        m=grid.size();
        n=grid[0].size();
        a=vector<vector<bool>> (m,vector<bool>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              if(!a[i][j]&&grid[i][j]=='1') {help(grid,i,j);ans++;}
            }
        }
        return ans;
    }
};