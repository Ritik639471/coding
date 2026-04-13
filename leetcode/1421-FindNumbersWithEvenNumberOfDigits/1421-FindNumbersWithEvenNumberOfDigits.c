// Last updated: 4/13/2026, 3:34:00 PM
int findNumbers(int* nums, int numsSize) {
    int j=0,k=0,n;
    for(int i=0;i<numsSize;i++){
        j=0;
        n=nums[i];
        while(n!=0){
           n=n/10;j++;
        }
        if(j%2==0) k++;
    }
    return k;
}