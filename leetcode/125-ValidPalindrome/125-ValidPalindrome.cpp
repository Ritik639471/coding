// Last updated: 4/13/2026, 3:39:09 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i]<='z'&&s[i]>='a'){
                str.push_back(s[i]);
            }
            else if(s[i]<='9'&&s[i]>='0'){
                str.push_back(s[i]);
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]-'A'+'a';
                str.push_back(s[i]);
            }
        }
        int n=str.length();
        for(int i=0;i<n/2;i++){
            if(str[i]!=str[n-1-i]) return false;
        }
        return true;
    }
};