// Last updated: 4/13/2026, 3:34:36 PM
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        long long int sum=0;
        int mi=INT_MAX;
        int n=nums.size();
        multiset<int>s;
        for(int i=0;i<n;i++){
            mi=min(mi,abs(nums[i]));
            if(nums[i]<0){
                s.insert(abs(nums[i]));
            }
            sum+=nums[i];
        }
        for (auto it=s.rbegin();it!=s.rend();it++) {
            sum+=2*(*it);
            if(k==1){k--; break;}
            k--;
        }
        if(k%2!=0){
            sum-=2*mi;
        }
        return sum;
    }
};