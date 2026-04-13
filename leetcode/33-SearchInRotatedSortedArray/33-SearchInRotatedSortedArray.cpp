// Last updated: 4/13/2026, 3:41:17 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums.size();
        if(n==1) return -!(nums[0]==target);
        if(n==2){
            if(nums[0]==target||nums[1]==target){
                return !(nums[0]==target);
            }
            else return -1;
        }
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
        
        if(pivot==-1){
            lo=0;
            hi=n-1;
        }
        else if(nums[0]<=target && nums[pivot-1]>=target){
            lo=0;
            hi=pivot-1;
        }
        else{
            lo=pivot;
            hi=n-1;
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    }
};