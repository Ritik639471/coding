// Last updated: 4/13/2026, 3:35:07 PM
bool isMonotonic(int* nums, int numsSize) {
    int i=0,prev,t=0;
    while(i<numsSize){
        if(i==0){
           prev=nums[i]; 
        }
        else if(prev<nums[i]){
            if(t==-1) return 0;
            t=1;
        }
        else if(prev>nums[i]){
            if(t==1) return 0;
            t=-1;
        }
        prev=nums[i];
        i++;
    }
    return 1;
}