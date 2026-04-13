// Last updated: 4/13/2026, 3:31:46 PM
class Solution {
public:
    unsigned long long binary(int n){
        unsigned long long a=0,b=1;
        while(n!=0){
            a+=b*(n%2);
            b*=10;
            n/=2;
        }
        return a;
    }
    int minChanges(int n, int k) {
        unsigned long long a=binary(n),b=binary(k);
        int num=0;
        while(a!=0&&b!=0){
            if((a%10)&&(b%10!=1)){
                num++;
            }
            else if((a%10==0)&&(b%10)) return -1;
            a/=10;
            b/=10;
        }
        while(a!=0){
            if(a%10) num++;
            a/=10;
        }
        while(b!=0){
            return -1;
        }
        return num;
    }
};