// Last updated: 4/13/2026, 3:32:51 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxele=*max_element(nums.begin(),nums.end());
        int count=0,countmax=0;
        for(auto c: nums){
            if(c==maxele){
                count+=1;
                countmax=max(count,countmax);
            }
            else{
                count=0;
            }
        }
        return countmax;
    }
};