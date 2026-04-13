// Last updated: 4/13/2026, 3:31:06 PM
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            int lo=i,hi=n-1,v=i;
            while(lo<=hi){
                int mid=(hi+lo)/2;
                if((long long)nums[mid] <= (long long)nums[i] * k){
                    v=max(v,mid);
                    lo=mid+1;
                }else hi=mid-1;
            }
            ans=max(ans,v-i+1);
        }
        return n-ans;
    }
};