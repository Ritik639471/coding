// Last updated: 4/13/2026, 3:34:17 PM
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=arr.size();
        int max=-1,max1=-1;
        for(int i=0;i<n;i++){
            if(max<arr[n-1-i]){
                max=arr[n-1-i];
            }
            arr[n-1-i]=max1;
            max1=max;
        }
        return arr;
    }
};