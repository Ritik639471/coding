// Last updated: 4/13/2026, 3:34:40 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    num[numSize-1]+=k;
    int i,n=0;
    for(i=0;i<numSize;i++){
        num[numSize-i-1]+=n;
        n=num[numSize-i-1];
        num[numSize-i-1]=n%10;
        n=n/10;
    }
    *returnSize=numSize;
    if(n==0) return num;
    i=n;
    while(i!=0){
        *returnSize=*returnSize+1;i=i/10;
    }

    int* arr=(int*)malloc(*returnSize*sizeof(int));
    i=0;
    while(i<*returnSize){
        while(i<numSize){
            arr[*returnSize-i-1]=num[numSize-i-1];i++;
        }
        arr[*returnSize-i-1]=n%10;
        n=n/10;
        i++;
    }
    return arr;
}