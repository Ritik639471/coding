// Last updated: 4/13/2026, 3:33:22 PM
class Solution {
public:
    int minSwaps(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
       int i=0,hi=s.length()-1,op=0,cl=0,ans=0;
       while(i<hi){
          if(s[i]=='[') op+=1;
          else cl+=1;
          if(cl>op){
            int c=0,o=0;
             while(hi>i){
                if(s[hi]=='[') o+=1;
                else c+=1;
                if(o>c) break;
                hi--;
             }
             ans++;
             op++;
             cl--;
          }
          i++;
       }
       return ans;
    }
};