// Last updated: 4/13/2026, 3:41:31 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==3) return nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int max=INT_MAX,ans;
        for(int i=0;i<n-2;i++){
            if(i!=0&&nums[i-1]==nums[i]) continue;
            for(int j=i+1;j<n-1;j++){
                if(j!=i+1&&nums[j-1]==nums[j]) continue;
                int lo=j+1,hi=n-1;
                int sum=nums[i]+nums[j];
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(abs(sum+nums[mid]-target)<abs(max)){
                        max=sum+nums[mid]-target;
                        ans=sum+nums[mid];
                    }
                    if((nums[mid]<0 ||nums[mid]>0)&& sum+nums[mid]-target>0) hi=mid-1;
                    else lo=mid+1;
                }
            }
        }
        return ans;
    }
};