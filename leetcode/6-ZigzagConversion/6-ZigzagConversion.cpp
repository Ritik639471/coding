// Last updated: 4/13/2026, 3:41:48 PM
class Solution {
public:
    string convert(string s, int numRows) {
        if(2*numRows-2==0) return s;
        string str;
        int n=s.length(),n1=2*numRows-2;
        for(int i=0;i<numRows;i++){
            int nu=n1;
            for(int j=i;j<n;j+=n1){
                str.push_back(s[j]);
                if(i>0&&i<numRows-1&&(nu-j%n1)<n){str.push_back(s[(nu-j%n1)]);}
                nu+=n1;
            }
        }
        return str;
    }
};