// Last updated: 4/13/2026, 3:40:47 PM
class Solution {
public:
    void sub(int n ,vector<int>& nums, vector<vector<int>>& ans , vector<int>& v ,vector<bool>& v1){
       if(v.size()==n){
        ans.push_back(v);
        return;
       }
       for(int i=0;i<n;i++){
        if(v1[i]==false){
          v.push_back(nums[i]);
          v1[i]=true;
          sub(n,nums,ans,v,v1);
          v1[i]=false;
          v.pop_back();
        }
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<bool> v1(n,false);
        vector<int> v;
        sub(n,nums,ans,v,v1);
        return ans;
    }
};