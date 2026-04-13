// Last updated: 4/13/2026, 3:36:55 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size(),i=0;
        while(i<n){
            if(nums[i]==i+1||nums[i]==nums[nums[i]-1]) i++;
            else{swap(nums[i],nums[nums[i]-1]);}
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) v.push_back(i+1);
        }
        return v;
    }
};