// Last updated: 4/13/2026, 3:31:32 PM
class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans=0;
        int prev=nums[0],n=nums.size(),j=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>prev){
                ans+=(long long)(i-j)*(long long)prev;
                prev=nums[i];
                j=i;
            }
        }
        ans+=(long long)(n-j-1)*(long long)prev;
        return ans;
    }
};