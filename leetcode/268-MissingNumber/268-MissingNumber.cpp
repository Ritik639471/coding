// Last updated: 4/13/2026, 3:37:32 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int j=0;j<=n;j++) ans^=j;
        for(int j=0;j<n;j++) ans^=nums[j];
        return ans;
    }
};