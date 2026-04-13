// Last updated: 4/13/2026, 3:41:51 PM
#include<limits.h>
int myAtoi(char* s) {
    int i=0;
    if(s[i]!='\0'){
        while(s[i]==' '){
            i++;
        }
        int abc=0;
        int sign=0;
        if(s[i]=='-'){
            sign=1;
            i++;
        }
        else if(s[i]=='+')
           i++;
        while(s[i]=='0')
           i++;
        while(s[i]>=48&&s[i]<58){
            int def=s[i]-48;
            if(abc==INT_MIN/10&&def>8)
               return INT_MIN;
            if(abc<INT_MIN/10)
               return INT_MIN;
            if(abc==INT_MAX/10&&def>7)
                return INT_MAX;
            if(abc>INT_MAX/10)
                return INT_MAX;
           abc=abc*10;
           if(sign)
              abc=abc-def;
            else
              abc=abc+def;
           i++;
        }
        return abc;
    }
    return 0;
}
//-91283472332
//2147483649