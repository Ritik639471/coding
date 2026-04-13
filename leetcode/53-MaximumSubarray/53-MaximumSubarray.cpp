// Last updated: 4/13/2026, 3:40:37 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if( ans<sum ){ans=sum;}
            if(sum<0){sum=0;}
        }
        return ans;
    }
};