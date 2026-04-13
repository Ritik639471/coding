// Last updated: 4/13/2026, 3:37:31 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),a=0;
        for(int i=0;i<n;i++){
            a=nums[i];
            int j=i;
            
            while(nums[nums[i]-1]!=nums[i]){
                swap(nums[nums[i]-1],nums[i]);
                if(i!=nums[i]-1&&nums[nums[i]-1]==nums[i]) return nums[i];
            }
        }
        return nums[n-1];
    }
};