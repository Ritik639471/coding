// Last updated: 4/13/2026, 3:40:16 PM
class Solution {
public:
    string addBinary(string a, string b) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int i=a.length()-1,j=b.length()-1;
        string str;
        int num=0;
        while(i>=0&&j>=0){
            num+=a[i]+b[j]-'0'-'0';
            str.push_back(num%2+'0');
            num/=2;
            i--;
            j--;
        }
        while(i>=0){
            num+=a[i]-'0';
            str.push_back(num%2+'0');
            num/=2;
            i--;
        }
        while(j>=0){
            num+=b[j]-'0';
            str.push_back(num%2+'0');
            num/=2;
            j--;
        }
        while(num!=0){
            str.push_back(num%2+'0');
            num/=2;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};