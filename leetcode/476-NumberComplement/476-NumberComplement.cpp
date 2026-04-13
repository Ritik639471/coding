// Last updated: 4/13/2026, 3:36:48 PM
class Solution {
public:
    int findComplement(int num) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        string str;
        int nu=0;
        long int j=1;
        while(num>0){
            nu+=(!(num%2))*(int)j;
            num/=2;
            j*=2;
        }
        return nu;
    }
};