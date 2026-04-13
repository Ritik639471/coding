// Last updated: 4/13/2026, 3:35:58 PM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<2) return 0;
        int ans=0,n=nums.size();
        int j=0,i=0;
        int c=1;
        for(i=0;i<n;i++){
           c*=nums[i];
           while(c>=k){
             ans+=(i-j);
             c/=nums[j++];
           }
        }
        while(j<n){
             ans+=(i-j);
             c/=nums[j++];
        }
        return ans;
    }
};