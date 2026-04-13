// Last updated: 4/13/2026, 3:40:54 PM
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        int n1=0;
        for(int i=0;i<n;i++){
           while(nums[i]>0 && nums[i]<=n&&nums[i]!=nums[nums[i]-1]){
              swap(nums[i],nums[nums[i]-1]);
           }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};