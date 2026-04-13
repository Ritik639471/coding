// Last updated: 4/13/2026, 3:32:21 PM
class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
       int n=skills.size();
       if(k>=n){return max_element(skills.begin(),skills.end())-skills.begin();}
       vector<int>  ans(n,0);
       vector<int>  num(n,0);
       int top=0;
       for(int i=0;i<n;i++) ans[i]=i;
       while(1){
          if(skills[ans[top]]>skills[ans[(top+1)%n]]){
             int temp=ans[(top+1)%n];
             ans[(top+1)%n]=ans[top];
             ans[top]=temp;
             top=(top+1)%n;
          }
          else{
             top=(top+1)%n;
          }
          num[ans[top]]+=1;
          if(num[ans[top]]==k) return ans[top];
       }
    }
};