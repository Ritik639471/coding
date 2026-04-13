// Last updated: 4/13/2026, 3:33:53 PM
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=arr.size();
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        int num=0;
        if(arr[k-1]/k>=threshold) num++;
        for(int i=1;i<=n-k;i++){
            if((arr[i+k-1]-arr[i-1])/k>=threshold) num++;
        }
        return num;
    }
};