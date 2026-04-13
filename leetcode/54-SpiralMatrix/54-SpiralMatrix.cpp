// Last updated: 4/13/2026, 3:40:36 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int r1=0,r2=m-1,c1=0,c2=n-1;
        vector<int> ans(m*n,0);
        int j=0;
        while(r1<=r2&&c1<=c2){
            for(int i=c1;j<m*n&&i<=c2;i++){
                ans[j++]=matrix[r1][i];
            }
            ++r1;
            for(int i=r1;j<m*n&&i<=r2;i++){
                ans[j++]=matrix[i][c2];
            }
            --c2;
            for(int i=c2;j<m*n&&i>=c1;i--){
                ans[j++]=matrix[r2][i];
            }
            --r2;
            for(int i=r2;j<m*n&&i>=r1;i--){
                ans[j++]=matrix[i][c1];
            }
            ++c1;
        }
        return ans;
    }
};