// Last updated: 4/13/2026, 3:41:49 PM
bool isPalindrome(int x) {
   int y=0,z=x;
   if(x<0)
     return false;
   while(z!=0&&y<INT_MAX/10){
      y=y*10;
      y+=z%10;
      z=z/10;
   } 
   if(x==y)
     return true;
    else
     return false;
}