// Last updated: 4/13/2026, 3:32:52 PM
class Solution {
public:
    int partitionString(string s) {
        int num=0,n=s.length(),prev=0;
        unordered_map<char,bool> m;
        for(int i=0;i<n;i++){
            if(m[s[i]]==true){
                num++;
                for(int j=prev;j<i;j++){
                    m[s[j]]=false;
                }
                prev=i;
            }
            m[s[i]]=true;
        }
        num+=1;
        return num;
    }
};