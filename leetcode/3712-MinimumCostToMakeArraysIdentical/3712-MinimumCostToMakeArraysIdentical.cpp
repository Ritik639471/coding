// Last updated: 4/13/2026, 3:31:14 PM
class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n=arr.size();
        long long ans=0,ans1=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){
                ans+=(long long)abs(arr[i]-brr[i]);
            }
        }
        sort(arr.begin(),arr.end());
         sort(brr.begin(),brr.end());
        ans1=(long long)k;
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){
                ans1+=(long long)abs(arr[i]-brr[i]);
            }
        }
        return min(ans,ans1);
    }
};