// Last updated: 4/13/2026, 3:34:57 PM
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n1=name.length(),n2=typed.length();
        if(n2<n1) return false;
        int c=name[0];
        int j=0;
        for(int i=0;i<n1;i++){
            while(i!=0 && j<n2 && name[i]!=typed[j] && c==typed[j]){
                j++;
            }
            if(j<n2 && name[i]==typed[j]){
                j++;
            }
            else return false;
            c=name[i];
        }
        while(j<n2 && c==typed[j]){
                j++;
        }
        return (j>=n2);
    }
};