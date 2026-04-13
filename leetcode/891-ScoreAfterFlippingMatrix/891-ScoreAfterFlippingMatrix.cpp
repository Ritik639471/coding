// Last updated: 4/13/2026, 3:35:17 PM
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                for(int j=0;j<n;j++){
                    grid[i][j]=!(grid[i][j]);
                }
            }
        }
        int zero=0,one=0;
        for(int j=1;j<n;j++){
            zero=0;
            one=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]) one++;
                else zero++;
            }
            if(zero>one){
                for(int i=0;i<m;i++){
                    grid[i][j]=!(grid[i][j]);
                }
            }
        }
        int sum=0,x=1;
        for(int i=0;i<m;i++){
            x=1;
            for(int j=n-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }
        }
        return sum;
    }
};