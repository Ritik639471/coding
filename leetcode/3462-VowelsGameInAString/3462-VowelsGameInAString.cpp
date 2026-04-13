// Last updated: 4/13/2026, 3:32:00 PM
class Solution {
public:
    bool doesAliceWin(string s) {
        int a=0,b=0,num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                num++;
                a=b;
                b=i;
            }
        }
        if(num==0) return false;
        if(num%2==1) return true;
        return true;
    }
};