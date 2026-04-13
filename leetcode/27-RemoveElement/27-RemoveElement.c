// Last updated: 4/13/2026, 3:41:16 PM
int removeElement(int* nums, int numsSize, int val) {
    int j=0,k=numsSize-1;
    if(numsSize==1&&nums[0]==val)
       return 0;
    for(int i=0;i<k+1;i++){
        if(nums[i]==val){
            while(nums[k]==val && k!=i){
                k--;}
            nums[i]=nums[k];
            // numsSize--;
            k--;
        }
    }
    return k+1;
}