// Last updated: 4/13/2026, 3:34:38 PM
class Solution {
public:
    queue<pair<int,int>>q;
    int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    int orangesRotting(vector<vector<int>>& grid) {
        int m,n,ans=0,k=0;
        m=grid.size();
        n=grid[0].size();
        int b[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                b[i][j]=0;
                if(grid[i][j]==1) k++;
               if(grid[i][j]==2){ grid[i][j]=-1;q.push({i,j});}
            }
        }
        while(!q.empty()){
            if(k==0) break;
            auto c=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int ro=c.first+dir[i][0],co=c.second+dir[i][1];
                if(ro<0||ro>=m||co>=n||co<0||grid[ro][co]==-1) continue;
                if(grid[ro][co]==1){
                    q.push({ro,co});
                    k--;
                    grid[ro][co]=-2;
                    grid[ro][co]=2;
                    b[ro][co]=b[c.first][c.second]+1;
                    ans=max(ans,b[ro][co]);
                }
            }
        }
        return k==0?ans:-1;
    }
};