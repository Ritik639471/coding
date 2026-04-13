// Last updated: 4/13/2026, 3:35:54 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        vector<int> v(n,0);
        int sum=0,sumr=0;
        for(int i=0;i<n;i++){
            v[n-1-i]-=sumr;
            v[i]+=sum;
            sum+=nums[i];
            sumr+=nums[n-1-i];
        }
        for(int i=0;i<n;i++){
           if(v[i]==0) return i; 
        }
        return -1;
    }
};