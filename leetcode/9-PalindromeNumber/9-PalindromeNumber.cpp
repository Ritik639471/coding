// Last updated: 4/13/2026, 3:41:42 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int a=0,b=(long int)x;
        while(x>0){
            a=a*10+x%10;
            x/=10;
        }
        return a==b; 
    }
};