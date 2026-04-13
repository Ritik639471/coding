// Last updated: 4/13/2026, 3:36:16 PM
double findMaxAverage(int* nums, int numsSize, int k) {
    double max=0,temp1=0;
    int i=0;
    for(i=0;i<numsSize;i++){
        temp1+=nums[i];
        if(i==k-1){ max=temp1/k; temp1=temp1-nums[i-k+1];}
        else if(i>k-1){if(max<temp1/k) max=temp1/k; temp1=temp1-nums[i-k+1];} 
    }
    return max;
}