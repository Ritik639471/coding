// Last updated: 4/13/2026, 3:33:07 PM
class Solution {
public:
    string repeatLimitedString(string s, int L) {
        int n=s.length();
        vector<int>ca(26,0);
        for(int i=0;i<n;i++){
            ca[s[i]-'a']++;
        }
        int i=0,j=25;
        while(i!=n){
            while(j>=0&&ca[j]==0){
                j--;
            }
            if(j==-1){
                s.resize(i);
                break;
            }
            int l=min(ca[j],L);
            for(int k=i;k<i+l;k++){
                if(k>=n) break;
                s[k]='a'+j;
            }
            i+=l;
            ca[j]-=l;
            if(L==l&&ca[j]>0){
                int k=j-1;
                while(k>=0&&ca[k]<=0) k--;
                if(k==-1) {
                    s.resize(i);
                    break;
                }
                else{
                    ca[k]-=1;
                    s[i]='a'+k;
                    i+=1;
                }
            }
        }
        return s;
    }
};