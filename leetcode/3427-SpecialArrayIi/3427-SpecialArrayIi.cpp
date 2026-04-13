// Last updated: 4/13/2026, 3:32:12 PM
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<vector<int>> arr;
        vector<int> v={0,0};
        for(int i=0;i<n;i++){
            if(i==n-1 || nums[i]%2==nums[i+1]%2){
                v[1]=i;
                arr.push_back(v);
                v[0]=i+1;
            }
        }
        n=queries.size();
        vector<bool> ans(n,false);
        int n1=arr.size();
        for(int i=0;i<n;i++){
            int k=0;
            int j=n1-1;
            while(k<=j){
                int mid=(j-k)/2+k;
                if(queries[i][0]==arr[mid][0]){
                    j=mid;
                    k=j+1;
                }
                else if(queries[i][0]<arr[mid][0]){
                    j=mid-1;
                }
                else{
                    k=mid+1;
                }
            }
            if(queries[i][0]>=arr[j][0]&&queries[i][1]<=arr[j][1]){
                    ans[i]=true;
                }
        }
        return ans;
    }
};