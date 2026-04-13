// Last updated: 4/13/2026, 3:34:21 PM
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=customers.size();
        int sum=0,Tsum=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1) sum+=customers[i];
            else{
                Tsum+=customers[i];
            }
        }
        int max=Tsum;
        int hi=minutes,lo=1;
        while(hi<n){
            if(grumpy[hi]==1){Tsum+=customers[hi];}
            else sum+=customers[hi];
            if(grumpy[lo-1]==1){Tsum-=customers[lo-1];}
            if(Tsum>max) max=Tsum;
            hi++;
            lo++;
        }
        return max+sum;
    }
};