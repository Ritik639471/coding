// Last updated: 4/13/2026, 3:36:15 PM
class Solution {
public:
    int minSteps(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int i=2,count=0;
        while(n>1){
            if(n%i==0){
                count+=i;
                n/=i;
            }
            else i++;
        }
        return count;
    }
};