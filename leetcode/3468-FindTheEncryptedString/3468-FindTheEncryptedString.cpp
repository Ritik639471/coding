// Last updated: 4/13/2026, 3:31:57 PM
class Solution {
public:
    string getEncryptedString(string s, int k) {
        string x;
        int j=0;
        for(int i=0;i<s.length();i++){
            j=(i+k)%s.length();
            x+=s[j];
        }
        return x;
    }
};