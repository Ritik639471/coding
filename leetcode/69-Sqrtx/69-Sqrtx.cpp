// Last updated: 4/13/2026, 3:40:14 PM
class Solution {
public:
    int mySqrt(int x) {
        long int low=0,high=x;
        long int ans,m;
        while(low<=high){
            m=low+(high-low)/2;
            if(m*m==x) return m;
            else if(m*m<x) {low=m+1;ans=m;}
            else high=m-1;
        }
        return ans;
    }
};