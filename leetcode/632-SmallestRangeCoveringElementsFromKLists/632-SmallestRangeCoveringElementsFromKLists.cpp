// Last updated: 4/13/2026, 3:36:20 PM
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k=nums.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int x,y=INT_MIN,dif,j,z;
        for(int i=0;i<k;i++){ 
            pq.push({nums[i][0],i});
            y=max(y,nums[i][0]);
        }
        x=pq.top().first;
        dif=y-x;
        z=y;
        vector<int>idx(k,0);
        while(true){
            j=pq.top().second;
            pq.pop();
            idx[j]+=1;
            if(idx[j]==nums[j].size()) break;
            z=max(z,nums[j][idx[j]]);
            pq.push({nums[j][idx[j]],j});
            if(dif>(z-pq.top().first)){
                x=pq.top().first;
                y=z;
                dif=y-x;
            }
        }
        return {x,y};
    }
};