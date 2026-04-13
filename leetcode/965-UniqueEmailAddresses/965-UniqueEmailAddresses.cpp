// Last updated: 4/13/2026, 3:34:56 PM
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n=emails.size(),num=0;
        map<string,bool> m;
        for(int i=0;i<n;i++){
            int j=0;
            string str;
            bool flag=true,flag1=false;
            while(emails[i][j]!='\0'){
                if(emails[i][j]=='@') {flag1=true;str.push_back(emails[i][j]);}
                else if(flag1==true) str.push_back(emails[i][j]);
                else if(emails[i][j]=='+'){ flag=false;}
                else if(emails[i][j]!='.'&&flag==true && emails[i][j]>='a'&&emails[i][j]<='z'){
                    str.push_back(emails[i][j]);
                }
                j++;
            }
           if (m.find(str)==m.end()) {num++ ;m[str]=true;}
        }
        return num;
    }
};