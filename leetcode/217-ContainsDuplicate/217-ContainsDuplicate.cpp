// Last updated: 4/13/2026, 3:38:03 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        unordered_map<int,bool> m;
        for(auto c: nums){
            if(m.find(c)!=m.end()){
                return true;
            }
            else{
                m[c]=true;
            }
        }
        return false;
    }
};