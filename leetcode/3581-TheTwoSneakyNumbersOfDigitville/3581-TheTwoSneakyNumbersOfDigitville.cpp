// Last updated: 4/13/2026, 3:31:23 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans(2);
        unordered_map<int,bool>m;
        int n=nums.size(),j=0;
        for(int i=0;i<n;i++){
            if(m[nums[i]]!=true){m[nums[i]]=true;}
            else{ans[j++]=nums[i];}
        }
        return ans;
    }
};