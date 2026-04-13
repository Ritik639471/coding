// Last updated: 4/13/2026, 3:31:27 PM
class Solution {
public:
    string convertDateToBinary(string date) {
        long int a[3],temp;
        string str,tem;
        int i=0;
        a[0]=0;
        while(i<4){
            a[0]=a[0]*10+(date[i]-'0');
            i++;
        }
        i++;
        a[1]=0;
        while(i<7){
            a[1]=a[1]*10+(date[i]-'0');
            i++;
        }
        i++;
        a[2]=0;
        while(i<10){
            a[2]=a[2]*10+(date[i]-'0');
            i++;
        }
        for(int i=0;i<3;i++){
            temp=0;
            long x=1;
            if(i!=0){str+='-';}
            while(a[i]!=0){
                temp+=(a[i]%2)*x;
                x*=10;
                a[i]/=2;
            }
            tem="";
            while(temp!=0){
                tem=(char)((temp%10)+'0')+tem;
                temp/=10;
            }
            str+=tem;
        }
        return str;
    }
};