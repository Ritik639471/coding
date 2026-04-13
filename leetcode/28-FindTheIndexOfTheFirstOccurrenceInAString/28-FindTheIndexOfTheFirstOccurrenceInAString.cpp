// Last updated: 4/13/2026, 3:41:11 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2=needle.size();
        if(n2>n1) return -1;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0] && haystack.substr(i,n2)==needle){
                return i;
            }
        }
        return -1;
    }
};