// Last updated: 4/13/2026, 3:39:57 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        if(n==1) return (nums[0]==target);
        if(n==2) return (nums[0]==target||nums[1]==target);
        int lo=0,hi=n-1;
        int pivot=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target||nums[lo]==target||nums[hi]==target) return true;
            if(mid==0) lo=mid+1;
            else if(mid==n-1) hi=mid-1;
            else if(nums[mid-1]>nums[mid]&&nums[mid]<nums[mid+1]){
                pivot=mid;break;
            }
            else if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1]){
                pivot=mid+1;break;
            }
            else if(nums[mid]>nums[hi]) lo=mid+1;
            else if(nums[mid]==nums[lo]&&nums[mid]==nums[hi]){lo++;hi--;}
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
            if(nums[mid]==target) return true;
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return false;
    }
};