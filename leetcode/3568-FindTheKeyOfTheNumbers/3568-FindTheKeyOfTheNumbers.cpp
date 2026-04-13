// Last updated: 4/13/2026, 3:31:25 PM
class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int key=0,x=1;
        int a,b,c;
        while(num1>0||num2>0||num3>0){
            key+=min(num1%10,min(num2%10,num3%10))*x;
            x*=10;
            num1/=10;
            num2/=10;
            num3/=10;
        }
        return key;
    }
};