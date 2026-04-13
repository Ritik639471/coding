// Last updated: 4/13/2026, 3:36:04 PM
class Solution {
public:
    int num=0;
    bool validPalindrome(string s) {
        if(num==2) return false;
        int n=s.length(),coun=1;
        if(n==1||n==2) return true;
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]==s[j]){i++;j--;}
            else{
                coun-=1;
                if(coun<0) {reverse(s.begin(),s.end());num++;return false+validPalindrome(s);}
                if(s[i]==s[j-1]) j--;
                else if(s[i+1]==s[j]) i++;
                else return false;
            }
        }
        return true;
    }
};