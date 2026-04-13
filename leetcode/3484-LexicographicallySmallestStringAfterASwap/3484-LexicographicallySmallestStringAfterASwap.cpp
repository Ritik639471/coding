// Last updated: 4/13/2026, 3:31:51 PM
class Solution {
public:
    string getSmallestString(string s) {
        for(int i=0;i<s.length()-1;i++){
           if((s[i]-'0')%2!=(s[i+1]-'0')%2){continue;}
           else{
            if(s[i]>s[i+1]){
                char a=s[i];
                s[i]=s[i+1];
                s[i+1]=a;
                return s;
            }
           }
        }
        return s;
    }
};