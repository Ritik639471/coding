// Last updated: 4/13/2026, 3:38:37 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1||nums[0]<nums[n-1]) return nums[0];
        if(n==2) return nums[1];
        int lo=0,hi=n-1;
        int pivot=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid==0) lo=mid+1;
            else if(mid==n-1) hi=mid-1;
            else if(nums[mid-1]>nums[mid]&&nums[mid]<nums[mid+1]){
                pivot=mid;break;
            }
            else if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1]){
                pivot=mid+1;break;
            }
            else if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid-1;
        }
        return nums[pivot];
    }
};