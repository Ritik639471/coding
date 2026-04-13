// Last updated: 4/13/2026, 3:37:40 PM
void moveZeroes(int* nums, int numsSize) {
    int j=0,i=0;
    if(numsSize==0) return;
    if(numsSize==1&&nums[0]==0) return;
    while(j<numsSize&&i<numsSize){
        if(nums[j]==0){
            while(nums[i]==0 && i<numsSize-1){
               i++;
            }
            if(i==numsSize) break;
            else{
            nums[j]=nums[i];nums[i]=0;i++;}
        }
        else{
            nums[j]=nums[i];
            i++;
        }
        j++;
    }
}