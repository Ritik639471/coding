// Last updated: 4/13/2026, 3:31:54 PM
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double num=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            double temp=((double)nums[i]+(double)nums[n-i-1])/2;
            if(num>temp||i==0) num=temp;
        }
        return num;
    }
};