// Last updated: 4/13/2026, 3:40:04 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=0,n;
        high=nums.size()-1;
        while(mid<=high){
           if(nums[mid]==2){
               n=nums[mid];
               nums[mid]=nums[high];
               nums[high]=n;
               high--;
           }
           else if(nums[mid]==0){
               n=nums[mid];
               nums[mid]=nums[low];
               nums[low]=n;
               low++;
               mid++;
           }
           else if(nums[mid]==1) mid++;
        }
    }
};