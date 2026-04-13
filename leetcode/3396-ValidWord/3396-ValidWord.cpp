// Last updated: 4/13/2026, 3:32:26 PM
class Solution {
public:
    bool isValid(string word) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=word.size();
        if(n<3) return false;
        int v=0,co=0;
        for(int i=0;i<n;i++){
            char ch=word[i];
            if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') v++;
                else co++;
            }
            else if(ch>='0'&&ch<='9') {;}
            else return false;
        }
        if(v>=1&&co>=1) return true;
        else return false;
    }
};