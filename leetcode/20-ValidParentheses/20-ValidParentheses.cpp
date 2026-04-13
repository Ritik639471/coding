// Last updated: 4/13/2026, 3:41:23 PM
class Solution {
public:
    bool isValid(string s) {
        bool a=true;
        stack<char> sta;
        int i=0; 
        while(s[i]!='\0'){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                sta.push(s[i]);
            }
            else{
                if(sta.empty()){a=false;break;}
                char ab=sta.top();
                sta.pop();
                if(ab=='('&&s[i]!=')') {a=false;break;}
                else if(ab=='{'&&s[i]!='}') {a=false;break;}
                else if(ab=='['&&s[i]!=']') {a=false;break;}
            }
            i++;
        }
        if(!sta.empty()) a=false;
        return a;
    }
};