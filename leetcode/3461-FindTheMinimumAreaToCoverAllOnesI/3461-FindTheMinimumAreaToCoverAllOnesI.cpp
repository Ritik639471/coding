// Last updated: 4/13/2026, 3:32:01 PM
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
       int r[2],c[2];
       r[0]=grid.size();r[1]=-1;
       c[0]=grid[0].size();c[1]=-1;
       for(int i=0;i<grid.size();i++){
          for(int j=0;j<grid[0].size();j++){
              if(grid[i][j]==1){
                if(r[0]>i) r[0]=i;
                if(r[1]<i) r[1]=i;
                if(c[0]>j) c[0]=j;
                if(c[1]<j) c[1]=j;
              }
          }
       }
       return (c[1]-c[0]+1)*(r[1]-r[0]+1);
    }
};