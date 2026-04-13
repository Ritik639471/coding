// Last updated: 4/13/2026, 3:32:13 PM
class Solution {
public:
    int minimumChairs(string s) {
        int num=0,avai=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='E'){
                if(avai==0){num++;}
                else avai--;
            }
            else{
                    avai++;
            }
        }
        return num;
    }
};