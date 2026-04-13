// Last updated: 4/13/2026, 3:32:54 PM
class Solution {
public:
    string removeStars(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=s.length();
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){j--;}
            else{
                s[j++]=s[i];
            }
        }
        return s.substr(0,j);
    }
};