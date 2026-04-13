// Last updated: 4/13/2026, 3:33:19 PM
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if(k==1) return 0;
        sort(nums.begin(),nums.end());
        int min=INT_MAX,n=nums.size();
        for(int i=0;i<=n-k;i++){
           if(min>nums[i+k-1]-nums[i]) min=nums[i+k-1]-nums[i];
        }
        return min;
    }
};