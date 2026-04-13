// Last updated: 4/13/2026, 3:33:44 PM
#pragma GCC optimize("O3")
#pragma GCC target("avx2, bmi, bmi2, lzcnt, popcnt")
static const bool __boost = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    return ios_base::sync_with_stdio(false);
}();

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zero=0,i=0,j=0,ans=-1;
        while(j<n){
            if(nums[j++]==0) zero++;
            while(zero>1){
                if(nums[i]==0) zero--;
                i++;
            }
            if(zero<=1){
                ans=max(ans,j-i-1);
            }
        }
        return ans;
    }
};