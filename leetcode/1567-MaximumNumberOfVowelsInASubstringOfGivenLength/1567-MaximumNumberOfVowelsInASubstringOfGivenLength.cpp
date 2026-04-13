// Last updated: 4/13/2026, 3:33:47 PM
class Solution {
public:
    int maxVowels(string s, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if(k==1){
            for(int i=0;i<s.length();i++)
               if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') return 1;
            return 0;
        }
        int n=s.length(),num=0;
        vector<int> vowel(n,0);
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') vowel[i]+=1;
           if(i!=0) vowel[i]+=vowel[i-1];
           if(i>=k&&num<vowel[i]-vowel[i-k]){num=vowel[i]-vowel[i-k];}
        }
        if(vowel[k-1]>num) num=vowel[k-1];
        return num;
    }
};