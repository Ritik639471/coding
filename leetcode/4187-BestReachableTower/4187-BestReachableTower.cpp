// Last updated: 4/13/2026, 3:30:58 PM
class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        map<int,pair<int,int>>mp;
        int n=towers.size();
        for(int i=0;i<n;i++){
            if((abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]))<=radius){ 
                if(mp.find(towers[i][2])==mp.end()) mp[towers[i][2]]={towers[i][0],towers[i][1]};
                else{
                    if(mp[towers[i][2]].first>towers[i][0]||mp[towers[i][2]].first==towers[i][0]&&mp[towers[i][2]].second>towers[i][1]) 
                         mp[towers[i][2]]={towers[i][0],towers[i][1]};
                }
            }
        }
        if(mp.empty()) return {-1,-1};
         auto d=*mp.rbegin();
         return {d.second.first,d.second.second};
    }
};