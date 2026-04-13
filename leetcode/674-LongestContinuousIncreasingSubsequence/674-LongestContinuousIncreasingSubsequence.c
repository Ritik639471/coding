// Last updated: 4/13/2026, 3:36:11 PM
int findLengthOfLCIS(int* nums, int numsSize) {
    int n=0,max=0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]<nums[i+1]){n++;}
        else{if(max<n+1) max=n+1;n=0;}
    }
    if(max==0||max<n+1) return n+1;
    return max;
}