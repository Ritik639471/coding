// Last updated: 4/13/2026, 3:38:58 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i=0; i<nums.size(); i++){  
            result = result ^ nums[i]; 
        }
        return result;
    }
};