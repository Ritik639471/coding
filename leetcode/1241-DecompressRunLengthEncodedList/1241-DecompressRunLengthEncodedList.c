// Last updated: 4/13/2026, 3:34:15 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    int i=0,j=0,num=0;
    while(i<numsSize){
        num=num+nums[i];
        i=i+2;
    }
    int* arr=(int*)malloc(num*sizeof(int));
    *returnSize=num;
    num=0;i=0;
    while(i<numsSize){
        j=nums[i];
        while(j>0){
            arr[num]=nums[i+1];j--;num++;
        }
        i=i+2;
    }
    return arr;
}