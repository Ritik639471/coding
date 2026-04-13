// Last updated: 4/13/2026, 3:36:19 PM
class Solution {
public:
    bool judgeSquareSum(int c) {
        long int C=(long int)c;
        long int lo=0;
        long int hi=sqrt(C);
        while(lo<=hi){
            long int mid= lo*lo+hi*hi;
            if(mid==C) return true;
            else if(mid<C) lo++;
            else hi--;
        }
        return false;
    }
};