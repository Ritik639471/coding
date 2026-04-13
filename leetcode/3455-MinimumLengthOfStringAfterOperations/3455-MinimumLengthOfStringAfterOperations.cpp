// Last updated: 4/13/2026, 3:32:03 PM
class Solution {
public:
    int minimumLength(string s) {
        vector<int> num(26,0);
        int nums=0;
        for(int i=0;i<s.length();i++){
            num[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            while(num[i]>=3){
                num[i]=num[i]/3+num[i]%3;
            }
            nums+=num[i];
        }
        return nums;
    }
};