// Last updated: 4/13/2026, 3:38:30 PM
class Solution {
public:
    string convertToTitle(int cn) {
        string str;
        while(cn>0){
            str=(char)((cn-1)%26+'A')+str;
            cn-=1;
            cn/=26;
        }
        return str;
    }
};