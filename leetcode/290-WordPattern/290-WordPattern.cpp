// Last updated: 4/13/2026, 3:37:30 PM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> m;
        map<string,char> m1;
        int j=0,n=s.size(),n1=pattern.size();
        if(n==1 &&n==n1&&pattern[0]==s[0]) return true;
        if(n==n1||n<n1) return false;
        bool flag=true;
        for(int i=0;i<n1;i++){
            if(j>=n) return false;
            int k=0;
            while(j+k<n && s[j+k]!=' '){
                k++;
            }
            string str;
            str=s.substr(j,k);
            j=j+k+1;
            if(m.find(pattern[i])==m.end()){
                m[pattern[i]]=str;
            }
            else if( m[pattern[i]]!=str){ flag=false;break;}
            if( m1.find(str)==m1.end()){
                m1[str]=pattern[i];
            }
            else if(m1[str]!=pattern[i]) {flag=false;break;}
        }
        if(j<n) return false;
        return flag;
    }
};