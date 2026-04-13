// Last updated: 4/13/2026, 3:33:59 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int * arr=(int*)malloc(n*sizeof(int));
    *returnSize=n;
    if(n==1) {arr[0]=0;return arr;}
    for(int i=0;i<n/2;i++){
        arr[i]=i+1;
        arr[n-i-1]=-i-1;
    }
    if(n%2!=0) arr[n/2]=0;
    return arr;
}