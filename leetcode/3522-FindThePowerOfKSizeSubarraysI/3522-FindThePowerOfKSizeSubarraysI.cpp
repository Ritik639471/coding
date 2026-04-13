// Last updated: 4/13/2026, 3:31:36 PM
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n-k+1,-1);
        if(k==1) return nums;
        if(n==k) {
            int max=-1;
            bool flag=true;
            int prev=nums[0];
            for(int j=0;j<n;j++){
                if(prev>nums[j]||(j!=0&&(prev+1)!=nums[j])){
                    flag=false;
                    break;
                }
                else if(max<nums[j]){
                    max=nums[j];
                }
                prev=nums[j];
            }
            if(flag && nums[0]!=max) return {max};
            else return {-1};

        }
        for(int i=0;i<=n-k;i++){
            int max=-1;
            bool flag=true;
            int prev=nums[i];
            for(int j=i;j<i+k;j++){
                if(prev>nums[j]||(j!=i&&(prev+1)!=nums[j])){
                    flag=false;
                    break;
                }
                else if(max<nums[j]){
                    max=nums[j];
                }
                prev=nums[j];
            }
            if(flag && nums[i]!=max) ans[i]=max;
        }
        return ans;
    }
};