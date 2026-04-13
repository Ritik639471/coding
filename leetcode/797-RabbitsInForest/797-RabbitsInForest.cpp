// Last updated: 4/13/2026, 3:35:28 PM
class Solution {
public:
    int numRabbits(vector<int>& an) {
        unordered_map<int,int>mp;
        int ans=0;
        for(auto c: an){
            if(mp[c]==0){
                mp[c]=c;
                ans+=(c+1);
            }
            else mp[c]--;
        }
        return ans;
    }
};