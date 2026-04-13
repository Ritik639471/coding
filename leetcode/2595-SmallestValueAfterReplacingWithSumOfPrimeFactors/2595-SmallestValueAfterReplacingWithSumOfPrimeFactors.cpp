// Last updated: 4/13/2026, 3:32:43 PM
class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        else if(n==2) return true;
        else if(n%2==0) return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    int smallestValue(int n) {
        if(isprime(n)) return n;
        int sum=0;
        for(int i=1;i<sqrt(n);i++){
            if(n%i==0&&isprime(i)){
            int j=n;
            while(j%i==0) {j/=i;sum+=i;}}
        }
        for(int i=sqrt(n);i>=1;i--){
            if(n%i==0&&isprime(n/i)){
                int j=n;
                while(j%(n/i)==0) {
                    j/=(n/i);sum+=(n/i);
                }
            }
        }
        if(sum==n) return sum;
        return smallestValue(sum); 
    }
};