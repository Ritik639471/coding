// Last updated: 4/13/2026, 3:33:49 PM
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        if(satisfaction[n-1]<=0) return 0;
        int sum=0,sum1=0;
        for(int i=n-1;i>=0;i--){
            sum+=satisfaction[i];
            if(sum1+sum>sum1) sum1+=sum;
            else return sum1;
        }
        return sum1;
    }
};