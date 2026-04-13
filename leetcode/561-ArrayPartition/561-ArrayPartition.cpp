// Last updated: 4/13/2026, 3:36:27 PM
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=0;
        for(int i=0;i<nums.size();i+=2){
            n+=nums[i];
        }
        return n;
    }
};