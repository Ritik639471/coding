// Last updated: 4/13/2026, 3:34:33 PM
class Solution {
public:
    bool Days(vector<int>& weights,int cap,int days){
        int n=weights.size();
        int sum=0,day=1,i=0;
        while(i<n){
            sum+=weights[i];
            if(sum>cap){
                day++;
                sum=weights[i];
            }
            i++;
        }
        return day<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int lo=0,hi=0;
        for(int i=0;i<weights.size();i++){
            if(lo<weights[i]) lo=weights[i];
            hi+=weights[i];
        }
        int ans=hi;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(Days(weights,mid,days)) {
                if(ans>mid) ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};