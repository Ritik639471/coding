// Last updated: 4/13/2026, 3:33:35 PM
class Solution {
public:
    int maximumUnits(vector<vector<int>>& bT, int ts) {
        int n=bT.size();
        priority_queue<pair<int,int>>pq;
        pair<int,int>c;
        for(int i=0;i<n;i++){
            pq.push({bT[i][1],bT[i][0]});
        }
        int ans=0;
        while(!pq.empty()&&ts>0){
            c=pq.top();
            pq.pop();
            if(c.second<=ts){
                ans+=c.second*c.first;
                ts-=c.second;
            }else{
                ans+=ts*c.first;
                ts=0;
            }
        }
        return ans;
    }
};