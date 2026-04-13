// Last updated: 4/13/2026, 3:37:15 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto c: nums) mp[c]++;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto c:mp){
            pq.push({c.second,c.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans(k);
        for(int i=0;i<k;i++){
            ans[i]=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};