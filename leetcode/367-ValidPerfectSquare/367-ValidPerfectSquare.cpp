// Last updated: 4/13/2026, 3:37:12 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        long int lo=0,hi=(long int)num;
        long int num1=hi;
        while(lo<=hi){
            long int mid=lo+(hi-lo)/2;
            if(mid*mid==num1) return true;
            else if(mid*mid>num1) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};