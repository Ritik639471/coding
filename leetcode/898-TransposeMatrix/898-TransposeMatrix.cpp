// Last updated: 4/13/2026, 3:35:14 PM
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> t(col,vector<int>(row));
        for(int i=0;i<col;i++)
        {
            for(int j=0;j<row;j++)
            {
                t[i][j]=matrix[j][i];
            }
        }
        return t;
    }
};
// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int m=matrix.size(),n=matrix[0].size();
//         vector<vector<int>> transpose(n,vector<int> (m));
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 transpose[j][i]=matrix[i][j];
//             }
//         }
//         return transpose;
//     }
// };