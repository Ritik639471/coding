// Last updated: 4/13/2026, 3:36:49 PM
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i=0,max=0,n=0;
    while(i!=numsSize){
        if(nums[i]==1){
            n++;
        }
        else{
            if(max<n){
                max=n;
                n=0;
            }
            else n=0;
        }
        i++;
    }
    if(max<n) return n;
    return max;
}