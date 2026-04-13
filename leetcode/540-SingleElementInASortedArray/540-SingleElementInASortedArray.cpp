// Last updated: 4/13/2026, 3:36:33 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
         int hi=nums.size()-1,lo=0,mid;
         if(hi==0) return nums[0];
         while(lo<hi){
            mid=lo+(hi-lo)/2;
            if(mid%2==0&&nums[mid]!=nums[mid+1]) {hi=mid;}
            else if(mid%2==1&&nums[mid]!=nums[mid-1]){hi=mid;}
            else {lo=mid+1;}
         }
         return nums[lo];
    }
};