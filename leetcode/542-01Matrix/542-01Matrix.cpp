// Last updated: 4/13/2026, 3:36:32 PM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n,INT_MAX));
        queue<pair<int,int>>q;
        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        pair<int,int>c;
        while(!q.empty()){
            c=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int ro=c.first+dir[i][0],co=c.second+dir[i][1];
                if(ro<0||co<0||ro>=m||co>=n||mat[ro][co]==0) continue;
                if(ans[ro][co]<=ans[c.first][c.second]+1) continue;
                ans[ro][co]=ans[c.first][c.second]+1;
                q.push({ro,co});
            }
        }
        return ans;
    }
};