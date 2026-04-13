// Last updated: 4/13/2026, 3:41:28 PM
class Solution {
public:
    void Combinations(string& digits,vector<string>& ans,vector<string>& key,int n,int idx,string str){
        if(idx==n){
            if(str=="") return;
            ans.push_back(str);
            return;
        }
        for(int i=0;i<key[digits[idx]-'0'-2].size();i++){
            char c=key[digits[idx]-'0'-2][i];
            Combinations(digits,ans,key,n,idx+1,str+c);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<string> key={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        Combinations(digits,ans,key,digits.size(),0,"");
        return ans;
    }
};