// Last updated: 4/13/2026, 3:32:11 PM
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       int num=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
           if(i<(nums.size()-1)&&nums[i]==nums[i+1]){
               num=num ^ (nums[i]);
               i++;
           }
       }
     return num;   
    }
};