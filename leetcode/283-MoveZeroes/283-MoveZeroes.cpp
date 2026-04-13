// Last updated: 4/13/2026, 3:37:33 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        int i=0,j=0;
        while(i<n && nums[i]!=0) i++;
        while(i<n && j<n){
            if(i<j&&nums[j]!=0){
                swap(nums[i],nums[j]);
                while(i<n && nums[i]!=0) i++;
                if(i==n) break;
            }
            j++;
        }
    }
};