// Last updated: 4/13/2026, 3:35:03 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int i=0,j=numsSize-1,temp;
    while(i<j){
        if(nums[i]%2==1){
            while(nums[j]%2==1&&i<j){
                j--;
            }
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j--;
        }
        i++;
    }
    * returnSize=numsSize;
    return nums;
}