// Last updated: 4/13/2026, 3:40:46 PM
class Solution {
public:
    void sub(int n ,vector<int>& nums, vector<vector<int>>& ans , vector<int>& v ,vector<bool>& v1){
       if(v.size()==n){
        ans.push_back(v);
        return;
       }
       for(int i=0;i<n;i++){
        if(i!=0 && nums[i]==nums[i-1] && v1[i-1]==false){continue;}
        if(v1[i]==false){
          v.push_back(nums[i]);
          v1[i]=true;
          sub(n,nums,ans,v,v1);
          v1[i]=false;
          v.pop_back();
        }
       }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<bool> v1(n,false);
        vector<int> v;
        sort(nums.begin(),nums.end());
        sub(n,nums,ans,v,v1);
        return ans;
    }
};