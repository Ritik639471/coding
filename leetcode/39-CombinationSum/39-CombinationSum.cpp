// Last updated: 4/13/2026, 3:40:57 PM
class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& v,int idx,int target,vector<int>& num){
    if(target==0) {
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<num.size();i++){
        if(i>idx && target<num[i]) return;
        if(target-num[i]<0) return;
        v.push_back(num[i]);
        helper(ans,v,i,target-num[i],num);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        helper(ans,v,0,target,candidates);
        return ans;
    }
};