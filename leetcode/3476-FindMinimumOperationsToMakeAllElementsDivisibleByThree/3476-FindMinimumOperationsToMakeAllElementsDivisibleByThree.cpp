// Last updated: 4/13/2026, 3:31:53 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size();i++){
            num+=(nums[i]%3!=0);
        }
        return num;
    }
};