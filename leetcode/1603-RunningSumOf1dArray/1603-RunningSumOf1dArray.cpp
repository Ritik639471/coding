// Last updated: 4/13/2026, 3:33:43 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};