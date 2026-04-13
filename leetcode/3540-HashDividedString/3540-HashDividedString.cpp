// Last updated: 4/13/2026, 3:31:30 PM
class Solution {
public:
    string stringHash(string s, int k) {
        string str;
        int j=0,n=s.length();
        while(j<n){
            int sum=0;
            for(int i=0;i<k;i++){
                sum+=(s[j+i]-'a');
            }
            sum=sum%26;
            sum=sum+(int)'a';
            str+={char(sum)};
            j+=k;
        }
        return str;
    }
};