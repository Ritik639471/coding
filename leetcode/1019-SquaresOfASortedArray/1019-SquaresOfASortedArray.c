// Last updated: 4/13/2026, 3:34:49 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    * returnSize=numsSize;
    int* arr=(int*)malloc(numsSize*sizeof(int));
    int j=0,k=0,l=0;
    while(nums[j]<0&&j<numsSize-1) j++;
    k=j-1;
    for(int i=0;i<numsSize;i++){
        if(k==-1){
            l=nums[j];
            arr[i]=l*l;j++;
        }
        else if(j==numsSize){
            l=nums[k];
            arr[i]=l*l;k--;
        }
        else if(nums[j]>-nums[k]){
            l=nums[k];
            arr[i]=l*l;k--;
        }
        else if(nums[j]<-nums[k]){
            l=nums[j];
            arr[i]=l*l;j++;
        }
        else if(nums[j]==-nums[k]){
            l=nums[j];
            arr[i]=l*l;j++;
        }
    }
    return arr;
}