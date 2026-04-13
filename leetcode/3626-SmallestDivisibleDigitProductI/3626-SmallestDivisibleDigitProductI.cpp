// Last updated: 4/13/2026, 3:31:16 PM
class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n){
            if(n<10&&n%t==0) return n;
            else if(n>9&&((n%10)*((n/10)%10))%t==0) {return n;}
            n++;
        }
        return n;
    }
};