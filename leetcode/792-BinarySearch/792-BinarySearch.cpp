// Last updated: 4/13/2026, 3:35:32 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,mid;
        while(i<=j){
            mid=(j-i)/2+i;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) i=mid+1;
            else j=mid-1;
        }
        return -1;
    }
};