// Last updated: 4/13/2026, 3:35:39 PM
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    for(int i=1;i<matrixSize;i++){
       for(int j=1;j<* matrixColSize;j++){
               if(matrix[i-1][j-1]!=matrix[i][j]) return 0;
       }
    }
    return 1;
}