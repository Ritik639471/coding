// Last updated: 4/13/2026, 3:34:43 PM
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n1=firstList.size(),n2=secondList.size();
        if(n1==0||n2==0) return {};
        int i=0,j=0;
        vector<vector<int>> ans;
        while(i<n1 && j<n2){
            if(firstList[i][0]>=secondList[j][0] && firstList[i][1]<=secondList[j][1]){
                ans.push_back(firstList[i]);
                i++;
            }
            else if(firstList[i][0]<=secondList[j][0] && firstList[i][1]>=secondList[j][1]){
                ans.push_back(secondList[j]);
                j++;
            }
            else if(firstList[i][0]>=secondList[j][0] &&firstList[i][0]<=secondList[j][1]&& firstList[i][1]>=secondList[j][1]){
                ans.push_back({firstList[i][0],secondList[j][1]});
                j++;
            }
            else if(firstList[i][0]<=secondList[j][0] &&firstList[i][1]>=secondList[j][0]&& firstList[i][1]<=secondList[j][1]){
                ans.push_back({secondList[j][0],firstList[i][1]});
                i++;
            }
            else if(firstList[i][0]>secondList[j][1]) {
                j++;
            }
            else i++;
        }
        return ans;
    }
};