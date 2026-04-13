// Last updated: 4/13/2026, 3:41:05 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=nums.size();
        int lo=0,hi=n-1,mid;
        vector<int> v={-1,-1};
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                v[0]=mid;
                hi=mid-1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        if(v[0]==-1) return v;
        lo=v[0];
        hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                v[1]=mid;
                lo=mid+1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return v;
    }
};