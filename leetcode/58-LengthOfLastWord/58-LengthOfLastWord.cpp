// Last updated: 4/13/2026, 3:40:30 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int i=n-1;
        while(i>0 && s[i]==' '){ n--;i--;}
        int count=0;
        for(i=n-1;i>-1;i--){
            if(s[i]==' ') return count;
            count++;
        }
        return count;
    }
};