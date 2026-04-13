// Last updated: 4/13/2026, 3:41:09 PM
int divide(int dividend, int divisor) {
 //   if(dividend==divisor)
 //      return 1;
  //  else if(-dividend==divisor)
  //     return -1;
    if(divisor==1||divisor==-1){
        if(dividend==INT_MIN)
           return divisor>0?INT_MIN:INT_MAX;
        if(dividend==INT_MAX)
           return divisor>0?INT_MAX:-INT_MAX;
           return divisor>0?dividend:-dividend;}
    int i=0,j=0;
    if(dividend>0 && divisor<0){
        if(-dividend>divisor)
          return 0;
       while(dividend+divisor>=j){
           j=j-divisor;
           i++;}
        return 0-i;
    }
    else if(dividend<0&&divisor>0){
        if(dividend>-divisor)
          return 0;
       while(dividend+divisor<=j){
           j=j-divisor;
           i++;}
        return 0-i;
    }
    else if(dividend<0&&divisor<0){
        if(dividend>divisor)
          return 0;
       while(dividend-divisor<=j){
           j=j+divisor;
           i++;}
        return i;
    }
    if(dividend<divisor)
        return 0;
    while(dividend-divisor>=j){
           j=j+divisor;
           i++;}
    return i;
}