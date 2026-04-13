// Last updated: 4/13/2026, 3:33:31 PM
class Solution {
public:
    int rev(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=n%10;
            n/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        map<long long,long long>mp;
        int n=nums.size();
        long long x,num=0;
        for(int i=0;i<n;i++){
            x=nums[i]-rev(nums[i]);
            num=(num+mp[x])%(1000000007);
            mp[x]+=1;
        }
        return num%(1000000007);
    }
};