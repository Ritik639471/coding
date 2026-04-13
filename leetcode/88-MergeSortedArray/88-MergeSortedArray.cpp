// Last updated: 4/13/2026, 3:39:49 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        int i=m+n-1;
        m-=1;
        n-=1;
        while(m>=0 && n>=0){
            if(nums1[m]>=nums2[n]){
                nums1[i--]=nums1[m--];
            }
            else nums1[i--]=nums2[n--];
        }
        while(m>=0){nums1[i--]=nums1[m--];}
        while(n>=0){nums1[i--]=nums2[n--];}
    }
};