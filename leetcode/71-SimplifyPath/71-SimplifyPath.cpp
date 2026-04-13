// Last updated: 4/13/2026, 3:40:10 PM
class Solution {
public:
    string simplifyPath(string path) {
        int n=path.length();
        vector<char> v(n);
        int j=0;
        if(path[0]!='/'){ v[0]='/';j++;}
        for(int i=0;i<n;i++){
            if((path[i]<='z'&&path[i]>='a')||(path[i]<='Z'&&path[i]>='A')){
                while(i<=n-1&&path[i]!='/'){v[j++]=path[i];i++;}
                i--;
            }
            else if(path[i]=='/'){
               if(i==0 ||v[j-1]!='/') v[j++]='/';
                while(path[i]=='/') i++;
                i--;
            }
            else if(path[i]=='.'&& i!=n-1 && path[i+1]=='/'){
               while(path[i+1]=='/') i++;
            }
            else if((path[i]=='.'&& i<n-1 && path[i+1]=='.'&&(path[i+2]=='/'))){
                if(j!=1){
                    j-=1;
                    while(j>1&& v[j-1] !='/'){
                        j--;
                    }
                }
                i+=2;
            }
            else{
                while(i<=n-1&&path[i]!='/'){v[j++]=path[i];i++;}
                i--;
            }
        }
        if(j>=2&&v[j-1]=='.'&& v[j-2]=='/'){
             j-=1;
        }
        if(j>=3&&v[j-1]=='.'&& v[j-2]=='.'&&v[j-3]=='/'){
             j-=3;
             while(j>1&&v[j-1]!='/') j--;
             if(j==0) j=1;
        }
        while(j!=1&&v[j-1]=='/') j--;
        string str;
        for(int i=0;i<j;i++){
            str+=v[i];
        }
        return str;
    }
};