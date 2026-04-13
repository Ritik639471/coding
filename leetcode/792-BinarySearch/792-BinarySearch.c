// Last updated: 4/13/2026, 3:35:37 PM
int search(int* nums, int numsSize, int target) {
    int l=0,r=numsSize-1,m=0;
    while(l<=r){
        m=(r-l)/2+l;
        if(nums[m]==target) return m;
        else if(nums[m]<target) l=m+1;
        else if(nums[m]>target) r=m-1;
    }
    return -1;
}