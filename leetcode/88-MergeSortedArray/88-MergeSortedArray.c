// Last updated: 4/13/2026, 3:39:54 PM
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0;
    if(n==0) return;
    while(i<n){
        nums1[m+i]=nums2[i];
        i++;
    }
   int k=0;
    for(i=0;i<nums1Size;i++){
        for(int j=i+1;j<nums1Size;j++){
            if(nums1[i]>nums1[j]){
                k=nums1[j];
                nums1[j]=nums1[i];
                nums1[i]=k;
            }
        }
    }
}