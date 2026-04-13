// Last updated: 4/13/2026, 3:34:27 PM
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto c: stones){
            pq.push(c);
        }
        int x,y;
        while(pq.size()>1){
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            if(x==y) continue;
            pq.push(x-y);
        }
        if(pq.size()) return pq.top();
        return 0;
    }
};