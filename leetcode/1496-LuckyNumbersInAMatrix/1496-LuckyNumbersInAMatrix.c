// Last updated: 4/13/2026, 3:33:51 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers (int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int min=0,micol=0,n=0,flag=0;
    int* luc=(int*)malloc((matrixSize>(*matrixColSize)?matrixSize:(*matrixColSize))*sizeof(int));
    for(int i=0;i<matrixSize;i++){
        min=matrix[i][0];
        micol=0;
        for(int j=0;j<* matrixColSize;j++){
            if(min>matrix[i][j]){
                min=matrix[i][j];
                micol=j;
            }
        }
        flag=1;
        for(int j=0;j<matrixSize;j++){
            if(min<matrix[j][micol]) {flag=0;break;}
        }
        if(flag!=0){luc[n]=min;n++;}
    }
    * returnSize=n;
    return luc;
}