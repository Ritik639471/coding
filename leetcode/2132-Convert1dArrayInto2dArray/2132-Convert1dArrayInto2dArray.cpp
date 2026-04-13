// Last updated: 4/13/2026, 3:33:16 PM
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int N=original.size();
        if(N>m*n||N<m*n) return {};
        vector<vector<int>> matrix(m,vector<int>(n));
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=original[k++];
            }
        }
        return matrix;
    }
};