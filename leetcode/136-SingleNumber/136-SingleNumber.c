// Last updated: 4/13/2026, 3:39:03 PM
int singleNumber(int* nums, int numsSize) {
    if(numsSize==1) return nums[0];
    int j,i=0;
    for( i=0;i<numsSize-1;i++){
        while(nums[i]==0&&i<numsSize-1) i++;
        for(j=i+1;j<numsSize;j++){
            while(nums[j]==0&&j<numsSize-1) j++;
            if(nums[i]==nums[j]) {nums[j]=0;j=numsSize+1;}
        }
        if(j==numsSize) return nums[i];
    }
    return 0;
}