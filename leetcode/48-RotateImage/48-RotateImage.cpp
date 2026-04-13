// Last updated: 4/13/2026, 3:40:44 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size(),temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<=i;j++){
               temp=matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
            }
        }
        // for (int i=0;i<m;i++){
        //     int low=0, high=m-1;
        //     while(low<high){
        //         int temp=matrix[i][low];
        //         matrix[i][low]=matrix[i][high];
        //         matrix[i][high]=temp;
        //         low++;
        //         high--;
        //     }
        // }
        for(int i=0;i<m;i++){
            for(int j=0;j<m/2;j++){
               temp=matrix[i][j];
               matrix[i][j]=matrix[i][m-1-j];
               matrix[i][m-1-j]=temp;
            }
        }
    }
};