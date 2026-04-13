// Last updated: 4/13/2026, 3:37:57 PM
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> str;
        int a;
        for(int i=0;i<nums.size();i++){
            a=nums[i];
            while (i+1<nums.size()&&nums[i+1]==nums[i]+1){i++;}
            if(a==nums[i]) {str.push_back(to_string(a));}
            else{
                str.push_back(to_string(a)+"->"+to_string(nums[i]));
            }
        }
        return str;
    }
};