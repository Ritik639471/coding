// Last updated: 4/13/2026, 3:35:42 PM
int dominantIndex(int* nums, int numsSize) {
    int max=0,max1=0,j=0;
    for(int i=0;i<numsSize;i++){
        if(max<nums[i]){ max1=max;max=nums[i];j=i;}
        else if(max1<nums[i]) max1=nums[i];
    }
    if(max<2*max1) return -1;
    return j;
}