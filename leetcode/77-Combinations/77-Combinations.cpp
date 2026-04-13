// Last updated: 4/13/2026, 3:40:03 PM
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        sub(n,ans,v,k,1);
        return ans;
    }
    void sub(int n , vector<vector<int>>& ans , vector<int>& v ,int k ,int j){
       if(v.size()==k){
        ans.push_back(v);
        return;
       }
       for(int i=j;i<=n;i++){
          v.push_back(i);
          sub(n,ans,v,k,i+1);
          v.pop_back();
        }
    }
};