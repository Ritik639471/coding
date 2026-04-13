// Last updated: 4/13/2026, 3:31:42 PM
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice=0,bob=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10) alice += nums[i];
            else bob += nums[i];
        }
        if(alice==bob) return false;
        return true;
    }
};