// Last updated: 4/13/2026, 3:35:49 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int> ans;
        for(int i=0;i<n;i++){
           if(!ans.empty()&&asteroids[i]<0&&ans.top()>0){ 
                while(!ans.empty()&&ans.top()>0&&abs(asteroids[i])>ans.top()){ ans.pop();}
                if(!ans.empty()&&ans.top()>0&&abs(asteroids[i])<ans.top()) continue;
                if(!ans.empty()&&abs(asteroids[i])==ans.top()){ans.pop();continue;}
                ans.push(asteroids[i]);
            }
            else{ans.push(asteroids[i]);}
        }
        vector<int> v(ans.size());
        int i=ans.size()-1;
        while(!ans.empty()){
            v[i--]=ans.top();
            ans.pop();
        }
        return v;
    }
};