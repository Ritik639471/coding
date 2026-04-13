// Last updated: 4/13/2026, 3:36:00 PM
int pivotIndex(int* nums, int numsSize) {
    int lef=0,righ=0,left[numsSize],right[numsSize];
    for(int i=0;i<numsSize;i++){
        left[i]=lef;
        lef+=nums[i];
        right[numsSize-1-i]=righ;
        righ+=nums[numsSize-i-1];
    }
    for(int i=0;i<numsSize;i++){
        if(right[i]==left[i])
          return i;
    }
    return -1;
}