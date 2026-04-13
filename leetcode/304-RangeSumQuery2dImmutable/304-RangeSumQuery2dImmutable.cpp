// Last updated: 4/13/2026, 3:37:24 PM
class NumMatrix {
public:
    vector<int> prefix;
    int n=0,m=0;
    NumMatrix(vector<vector<int>>& matrix) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        m=matrix.size();
        n=matrix[0].size();
        prefix.resize(m*n,0);
        int prev=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                prefix[n*i+j]=prev+matrix[i][j];
                prev=prefix[n*i+j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<row2+1;i++){
            sum=sum+prefix[n*i+col2]-((i+col1)==0?0:prefix[n*i+col1-1]);
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */