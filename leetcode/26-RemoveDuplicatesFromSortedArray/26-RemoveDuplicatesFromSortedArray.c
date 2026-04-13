// Last updated: 4/13/2026, 3:41:20 PM
int removeDuplicates(int* nums, int numsSize) {
  int k=0;
  for(int i=0;i<numsSize;i++){
       if(nums[i]>nums[k]){
        k+=1;
        nums[k]=nums[i];
       }
    }
  return k+1;  
}