// Last updated: 4/13/2026, 3:32:55 PM
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int sum=0,n=nums.size(),m=queries.size();
        vector<int>ans(m);
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<m;i++){
           int lo=0,hi=n-1;
           if(queries[i]<nums[0]) {ans[i]=0;continue;}
           else if(queries[i]>=nums[n-1]){ans[i]=n;continue;}
           else if(n==1&&queries[i]>=nums[0]) {ans[i]=1;continue;}
           while(lo<=hi){
              int mid=(lo+hi)/2;
              if(mid!=n-1&&nums[mid]<=queries[i]&&nums[mid+1]>queries[i]) {ans[i]=mid+1;break;}
              else if(lo!=n-1 && nums[lo]<=queries[i]&&nums[lo+1]>queries[i]) {ans[i]=lo+1;break;}
              else if(hi!=n-1&&nums[hi]<=queries[i]&&nums[hi+1]>queries[i]) {ans[i]=hi+1;break;}
              else if(nums[mid]<queries[i]){
                 lo=mid+1;
              }
              else hi=mid-1;
           }
           
        }
        return ans;
    }
};