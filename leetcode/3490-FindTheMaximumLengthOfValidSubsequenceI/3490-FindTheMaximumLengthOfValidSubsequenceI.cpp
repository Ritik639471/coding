// Last updated: 4/13/2026, 3:31:50 PM
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int zero=0,one=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%2;
            if(nums[i]) one++;
            else zero++;
        }
        int oe=0,eo=1,n1=0,n2=0;
        for(int i=0;i<nums.size();i++){
            if(oe!=nums[i]){oe=nums[i];n1++;}
            if(eo!=nums[i]){eo=nums[i];n2++;}
        }
        return max(max(n1,n2),max(one,zero));
    }
};