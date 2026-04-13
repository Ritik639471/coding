// Last updated: 4/13/2026, 3:35:18 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int lo=0,hi=arr.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid-1]<arr[mid]&&arr[mid+1]<arr[mid]) return mid;
            else if(arr[mid-1]<arr[mid]){
                lo=mid+1;
            }
            else hi=mid;
        }
        return hi+1;
    }
};