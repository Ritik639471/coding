// Last updated: 4/13/2026, 3:35:20 PM
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        int n=rooms.size();
        vector<bool>a(n);
        q.push(0);
        while(q.size()>0){
            int i=q.front(),j=0;
            q.pop();
            if(a[i]) continue;
            a[i]=true;
            n--;
            while(j<rooms[i].size()){
                q.push(rooms[i][j]);
                j++;
            }
        }
        return n==0;
    }
};