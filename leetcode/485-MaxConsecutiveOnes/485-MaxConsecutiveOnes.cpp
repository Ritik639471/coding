// Last updated: 4/13/2026, 3:36:45 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ma=0,n=0,m=nums.size();
        for(int i=0;i<m;i++){
            n+=nums[i];
            ma=max(ma,n);
            if (!nums[i]) n=0;
        }
        return ma;
    }
};