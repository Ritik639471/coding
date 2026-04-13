// Last updated: 4/13/2026, 3:34:59 PM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
   int i=0,j,temp;
   while(i<numsSize){
       if(nums[i]%2!=i%2){
           j=i+1;
           while(nums[j]%2==j%2||nums[i]%2==nums[j]%2) j++;
           temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
       }
       i++;
   }
   * returnSize=numsSize;
   return nums;
}