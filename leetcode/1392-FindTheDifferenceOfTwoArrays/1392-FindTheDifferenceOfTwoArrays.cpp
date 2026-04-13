// Last updated: 4/13/2026, 3:34:04 PM
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_map<int,bool> m,m1;
        vector<vector<int>> ans;
        vector<int> v;
        for(int c: nums1){
            m[c]=true;
        }
        for(int c: nums2){
            m1[c]=true;
        }
        for(auto c: m){
            if(m1.find(c.first)==m1.end()){
                v.push_back(c.first);
            }
        }
        ans.push_back(v);
        v.clear();
        for(auto c: m1){
            if(m.find(c.first)==m.end()){
                v.push_back(c.first);
            }
        }
        m.clear();
        m1.clear();
        ans.push_back(v);
        v.clear();
        return ans;
    }
};