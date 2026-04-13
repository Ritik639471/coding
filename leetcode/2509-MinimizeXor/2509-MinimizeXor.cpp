// Last updated: 4/13/2026, 3:32:50 PM
class Solution {
public:
    int minimizeXor(int num1, int num2) {
        string s1,s2;
        while(num2!=0){
            s2=to_string(num2%2)+s2;
            num2/=2;
        }
        while(num1!=0){
            s1=to_string(num1%2)+s1;
            num1/=2;
        }
        int count=0;
        for(auto c: s2){
            if(c=='1') count++;
        }
        for(auto c: s1){
            if(c=='1') count--;
        }
        if(count<0){
            int i=s1.size()-1;
            while(count!=0) {
                while(s1[i]!='1'){
                    i--;
                }
                s1[i]='0';
                count++;
            }
        } else {
            int i=s1.size()-1;
            while(count!=0) {
                while(i>=0&&s1[i]!='0'){
                    i--;
                }
               if(i>=0){ s1[i]='1';
                count--;}
                else{
                    s1="1"+s1;
                    count--;
                }
            }
        }
        int i=s1.size()-1;
        count=1;
        while(i>=0) {
            num1+=count*(s1[i]-'0');
            i--;
            count*=2;
        }
        return num1;
    }
};