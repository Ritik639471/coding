// Last updated: 4/13/2026, 3:34:44 PM
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({(points[i][0]*points[i][0])+(points[i][1]*points[i][1]),i});
            if(pq.size()>k) pq.pop();
        }
        vector<vector<int>> ans(k,vector<int>(2));
        for(int i=0;i<k;i++){
            ans[i][0]=points[pq.top().second][0];
            ans[i][1]=points[pq.top().second][1];
            pq.pop();
        }
        return ans;
    }
};