// Last updated: 4/13/2026, 3:36:40 PM
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<sqrt(num);i++){
            if(num%i==0) sum+=i;
        }
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0) sum+=(num/i);
        }
        return num==sum;
    }
};