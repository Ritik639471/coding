// Last updated: 4/13/2026, 3:37:54 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n=(nums.size()+3)/3;
        for(int c: nums){
            m[c]++;
        }
        vector<int> ans;
        for(auto c: m){
            if(c.second>=n) ans.push_back(c.first);
        }
        return ans;
    }
};