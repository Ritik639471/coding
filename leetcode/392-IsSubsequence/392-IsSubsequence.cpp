// Last updated: 4/13/2026, 3:37:01 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,num=0;
        for(int i=0;i<s.length();i++){
            if(t[j]=='\0') return false;
            while(t[j]!='\0'&&t[j]!=s[i]){
                j++;
            }
            if(t[j]==s[i]){ num++;j++;}
            else return false;
        }
        if(num<s.length()) return false;
        else return true;
    }
};