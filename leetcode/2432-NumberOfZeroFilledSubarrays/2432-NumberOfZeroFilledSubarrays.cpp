// Last updated: 4/13/2026, 3:32:56 PM
class Solution {

public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        long long zero=0;
        long long ans=0;
        for(auto c:nums){
            if(c!=0&&zero!=0){
                ans+=(zero*zero+zero)/2;
                zero=0;
            }
            else if(c==0) zero++;
        }
        if(zero!=0){
                ans+=(zero*zero+zero)/2;
        }
        return ans;
    }
};