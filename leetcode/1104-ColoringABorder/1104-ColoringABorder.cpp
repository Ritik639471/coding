// Last updated: 4/13/2026, 3:34:29 PM
class Solution {
public:
    int m,n;
    vector<vector<bool>>a;
    vector<vector<bool>>b;
    void help(vector<vector<int>>& grid, int row, int col, int k){
        if(row<0||col<0||row>=m||col>=n||grid[row][col]!=k||a[row][col]) return;
        a[row][col]=true;
        help(grid,row-1,col,k);
        help(grid,row+1,col,k);
        help(grid,row,col-1,k);
        help(grid,row,col+1,k);
        if(col==0||col==n-1||row==0||row==m-1) {b[row][col]=true;return;}
        if(grid[row-1][col]!=k ||grid[row+1][col]!=k||grid[row][col-1]!=k||grid[row][col+1]!=k) b[row][col]=true;
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        if(grid[row][col]==color) return grid;
        m=grid.size();
        n=grid[0].size();
        a=vector<vector<bool>> (m,vector<bool>(n));
        b=vector<vector<bool>> (m,vector<bool>(n));
        help(grid,row,col,grid[row][col]);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i][j]) grid[i][j]=color;
            }
        }
        return grid;
    }
};