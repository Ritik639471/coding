// Last updated: 4/13/2026, 3:33:04 PM
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min=0;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<abs(nums[min])) min=i;
            else if(abs(nums[i])==abs(nums[min])){
                if(nums[i]>nums[min]) min=i;
            }
        }
        return nums[min];
    }
};