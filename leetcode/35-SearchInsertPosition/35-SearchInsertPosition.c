// Last updated: 4/13/2026, 3:41:07 PM
int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target) return i;
        if(nums[i]>target) return i;
    }
    return i;
}