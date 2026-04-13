// Last updated: 4/13/2026, 3:41:04 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int i=0;
      for(i=0;i<nums.size();i++){
        if(nums[i]==target) return i;
        if(nums[i]>target) return i;
      }
      return i;
    }
};