// Last updated: 4/13/2026, 3:38:13 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> ans(150,1000);
        int i=0,n=s.length();
        while(i<n){
            if(ans[(int)s[i]]==1000){
                ans[(int)s[i]]=s[i]-t[i];
            }
            else if(ans[(int)s[i]]!=(s[i]-t[i])){
                return false;
            }
            i++;
        }
        for(i=0;i<150;i++){
            ans[i]=1000;
        }
        i=0;
        while(i<n){
            if(ans[(int)t[i]]==1000){
                ans[(int)t[i]]=t[i]-s[i];
            }
            else if(ans[(int)t[i]]!=(t[i]-s[i])){
                return false;
            }
            i++;
        }
        return true;
    }
};