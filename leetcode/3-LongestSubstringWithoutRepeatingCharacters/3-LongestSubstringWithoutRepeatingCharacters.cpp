// Last updated: 4/13/2026, 3:41:56 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<bool>m(500,0);
        int start=0,max=0,count=0;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]){
                int j=start;
                while(s[j]!=s[i]){
                    m[s[j]]=false;
                    count--;
                    start++;
                    j++;
                }
                m[s[i]]=false;
                start++;
                count--;
            }
            m[s[i]]=true;
            count++;
            if(max<count) max=count;
        }
        return max;
    }
};