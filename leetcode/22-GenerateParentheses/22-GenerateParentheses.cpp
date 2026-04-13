// Last updated: 4/13/2026, 3:41:22 PM
class Solution {
public:
    void helper(vector<string>& ans,string v,int on,int cn){
      if(on==0&&cn==0){
        ans.push_back(v);
        return;
      }
      if(on>cn){
        return;
      }
      if(on<0||cn<0) return;
      helper(ans,v+"(",on-1,cn);
      helper(ans,v+")",on,cn-1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string v;
        helper(ans,v,n,n);
        return ans;
    }
};