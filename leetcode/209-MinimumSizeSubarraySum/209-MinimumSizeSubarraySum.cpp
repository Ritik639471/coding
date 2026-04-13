// Last updated: 4/13/2026, 3:38:09 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size(),sum=0,idx=0,ans=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                ans=min(ans,i-idx+1);
                sum-=nums[idx];
                idx++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};