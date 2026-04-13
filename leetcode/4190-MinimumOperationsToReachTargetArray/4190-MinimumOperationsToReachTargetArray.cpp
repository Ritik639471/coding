// Last updated: 4/13/2026, 3:31:04 PM
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
       set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=target[i]) st.insert(nums[i]);
        }
        return (int)st.size();
    }
};