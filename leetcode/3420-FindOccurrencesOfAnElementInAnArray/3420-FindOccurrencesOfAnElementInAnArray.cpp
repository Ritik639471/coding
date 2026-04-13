// Last updated: 4/13/2026, 3:32:17 PM
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                ans.push_back(i);
            }
        }
        int n=ans.size();
        for(int i=0;i<queries.size();i++){
            if(queries[i]<=n) queries[i]=ans[queries[i]-1];
            else queries[i]=-1;
        }
        return queries;
    }
};