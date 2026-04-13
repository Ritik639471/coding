// Last updated: 4/13/2026, 3:36:24 PM
class Solution {
public:
    string fractionAddition(string expression) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int i=0;
        int num=0,den=1,num1=0,den1=1,j=1;
        while(expression[i]!='\0'){
            if(expression[i]=='-'){i+=1;j=-1;}
            else if(expression[i]=='+') {j=1;i+=1;}
            if(expression[i]>='0'&&expression[i]<='9'){
                num1=expression[i]-'0';
                i+=1;
                if(expression[i]>='0'&&expression[i]<='9'){
                    num1=num1*10+(expression[i]-'0');
                    i+=1;
                }
            }
            i+=1;
            if(expression[i]>='0'&&expression[i]<='9'){
                den1=expression[i]-'0';
                i+=1;
                if(expression[i]>='0'&&expression[i]<='9'){
                    den1=den1*10+(expression[i]-'0')*10;
                    i+=1;
                }
            }
            num1*=j;
            num=num*den1+num1*den;
            den=den*den1;
        }
        j=2;
            int ma=max(num,den);
            while(j<=ma && abs(num)>1 && den>1){
              if(abs(num)%j==0 && den%j==0){num/=j;den/=j;}
               else j++;
            }
        if(num==0) return "0/1";
        return to_string(num)+"/"+to_string(den);
    }
};