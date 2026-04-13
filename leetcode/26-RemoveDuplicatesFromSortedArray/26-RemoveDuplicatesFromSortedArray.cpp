// Last updated: 4/13/2026, 3:41:13 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[j]!=nums[i]) {nums[++j]=nums[i];}
        }
        return j+1;
    }
};