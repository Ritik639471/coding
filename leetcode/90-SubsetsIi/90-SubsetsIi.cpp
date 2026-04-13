// Last updated: 4/13/2026, 3:39:46 PM
class Solution {
public:
    void helper(vector<int>& nums,vector<vector<int>>& ans,vector<int>& v,int idx,int n){
        ans.push_back(v);
        for(int i=idx;i<n;i++){
         if(i!=idx && nums[i]==nums[i-1]) continue;
          v.push_back(nums[i]);
          helper(nums,ans,v,1+i,n);
          v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(),nums.end());
        helper(nums,ans,v,0,nums.size());
        return ans;
    }
};