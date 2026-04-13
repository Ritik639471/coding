// Last updated: 4/13/2026, 3:31:12 PM
class Solution {
public:
    string findValidPair(string s) {
        vector<int>arr(10,0);
        int n=s.length();
        for(int i=0;i<n;i++){
            arr[s[i]-'0']+=1;
        }
        for(int i=0;i<n-1;i++){
            if(arr[s[i]-'0']==s[i]-'0'&&arr[s[i+1]-'0']==s[i+1]-'0'&&s[i]-'0'!=s[i+1]-'0'){
                string a="";
                a+=s[i];
                a+=s[i+1];
                return a;
            }
        }
        return "";
    }
};