// Last updated: 4/13/2026, 3:31:09 PM
class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>>r(m,vector<bool>(n,false));
        queue<pair<int,int>>q;
        long long ans=0;
        int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0&&!(r[i][j])){
                    q.push({i,j});
                    r[i][j]=true;
                    long long s=0;
                    while(!q.empty()){
                        auto c=q.front();
                        q.pop();
                        s+=grid[c.first][c.second];
                        for(int l=0;l<4;l++){
                            int x=c.first+dir[l][0],y=c.second+dir[l][1];
                            if(x>=0&&x<m&&y>=0&&y<n&&grid[x][y]>0&&(!r[x][y])){
                                q.push({x,y});
                                r[x][y]=true;
                            }
                        }
                    }
                    if(s%k==0) ans++;
                }
            }
        }
        return ans;
    }
};