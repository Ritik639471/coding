// Last updated: 4/13/2026, 3:37:00 PM
int thirdMax(int* nums, int numsSize) {
     int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,x=0;
     for(int i=0;i<numsSize;i++){
        if(nums[i]==max1&&nums[i]!=INT_MIN) x+=1;
        if(nums[i]==max2&&nums[i]!=INT_MIN) x+=1;
        if(nums[i]>max1){
            max3=max2;
            max2=max1;
            max1=nums[i];
        }
        if(nums[i]>max2&&nums[i]<max1){
            max3=max2;
            max2=nums[i];
        }
        if(nums[i]>max3&&nums[i]<max1&&nums[i]<max2) max3=nums[i];
     }
     if(max1!=max2 && max2!=max3 && max1!=max3 && (numsSize-x)>2){
        return max3;
     }
     return max1;
}