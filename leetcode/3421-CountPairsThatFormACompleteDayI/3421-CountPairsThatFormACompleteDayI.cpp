// Last updated: 4/13/2026, 3:32:16 PM
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int num=0;
        int i=0;
        vector<int> ans(24,0);
        for(i=0;i<hours.size();i++){
            ans[hours[i]%24]++;
        }
        while(ans[0]!=0){ans[0]--;num+=ans[0];}
        while(ans[12]!=0){ans[12]--;num+=ans[12];}
        for(i=1;i<12;i++){
            num+=ans[i]*ans[24-i];
        }
        return num;
    }
};