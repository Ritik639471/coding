// Last updated: 4/13/2026, 3:31:34 PM
class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int row=0,col=0,n1=grid.size(),n2=grid[0].size();
        for(int i=0;i<n1;i++){
            for(int j=0;j<(n2/2);j++){
                if(grid[i][j]!=grid[i][n2-j-1]) row++;
            }
        }
        for(int i=0;i<n2;i++){
            for(int j=0;j<(n1/2);j++){
                if(grid[j][i]!=grid[n1-j-1][i]) col++;
            }
        }
        return ((row<=col)?row:col);
    }
};