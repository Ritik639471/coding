// Last updated: 4/13/2026, 3:36:17 PM
class Solution {
public:
    string solveEquation(string equation) {
        int i=0,j=1,num=0,cor=0,valr=0,col=0,vall=0;
        while(equation[i]!='='){
            num=0;
            j=1;
            bool flag =false;
            if(equation[i]=='-'){j=-1;i+=1;}
            else if(equation[i]=='+'){j=1;i+=1;}
            while(equation[i]>='0'&&equation[i]<='9'){
                flag=true;
                num=num*10+(equation[i]-'0');
                i+=1;
            }
            if(equation[i]=='x'){
                if(flag==false) num=1;
                cor+=j*num;
                i+=1;
            }
            else{
                valr+=j*num;
            }
        }
        i+=1;
        while(equation[i]!='\0'){
            num=0;
            j=1;
            bool flag =false;
            if(equation[i]=='-'){j=-1;i+=1;}
            else if(equation[i]=='+'){j=1;i+=1;}
            while(equation[i]>='0'&&equation[i]<='9'){
                flag=true;
                num=num*10+(equation[i]-'0');
                i+=1;
            }
            if(equation[i]=='x'){
                if(flag==false) num=1;
                col=col+j*num;
                i+=1;
            }
            else{
                vall+=j*num;
            }
        }
        if(col==cor && vall-valr==0) return "Infinite solutions";
        if(col==cor && vall-valr!=0) return "No solution";
        return "x="+to_string((vall-valr)/(cor-col));
    }
};