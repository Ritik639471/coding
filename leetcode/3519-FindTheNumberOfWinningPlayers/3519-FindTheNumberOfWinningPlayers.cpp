// Last updated: 4/13/2026, 3:31:38 PM
class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int win=0;
        for(int i=0;i<10;i++){
            int j=0;
            vector<int> ans(11,0);
            while(j<pick.size()){
                if(pick[j][0]==i){
                   ans[pick[j][1]] +=1;
                }
                j++;
            }
            int a=*max_element(ans.begin(),ans.end());
            if(a>=i+1) win++;
        }
        return win;
    }
};