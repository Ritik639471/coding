// Last updated: 4/13/2026, 3:41:46 PM
class Solution {
public:
    int reverse(int x) {
        int temp=0;
      while(x!=0){
        if(temp<INT_MIN/10||temp>INT_MAX/10)
           return 0;
        else{
         temp=temp*10;
         temp+=x%10;
         x=x/10;}
      }
      return temp;
    }
};