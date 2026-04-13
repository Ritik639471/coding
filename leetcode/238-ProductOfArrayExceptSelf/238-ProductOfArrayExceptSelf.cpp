// Last updated: 4/13/2026, 3:37:44 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),pre=1,suf=1;
        vector<int> answer(n,1);
        for(int i=0;i<n;i++){
            answer[i]*=pre;
            answer[n-i-1]*=suf;
            pre*=nums[i];
            suf*=nums[n-i-1];
        }
        return answer;
    }
};