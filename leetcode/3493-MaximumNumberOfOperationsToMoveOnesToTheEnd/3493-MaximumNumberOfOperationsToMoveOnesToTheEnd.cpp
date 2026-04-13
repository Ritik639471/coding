// Last updated: 4/13/2026, 3:31:49 PM
class Solution {
public:
    int maxOperations(string s) {
        int num=0,i=0,one=0;
        while(i<s.length()){
            bool yes=false;
            while(s[i]!='\0'&&s[i]=='0'){
                i++;
                yes=true;
            }
            if(yes)num+=one;
            if(s[i]=='1') one++;
            i++;
        }
        return num;
    }
};