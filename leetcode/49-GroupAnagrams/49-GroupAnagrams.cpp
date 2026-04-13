// Last updated: 4/13/2026, 3:40:43 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if(strs.size()<=1) return {strs};
        multimap<string,int> m;
        for(int i=0;i<strs.size();i++){
           string str=strs[i];
           sort(str.begin(),str.end());
           m.insert(make_pair(str,i));
        }
        vector<vector<string>> ans;
        vector<string> v;
        string str;
        for(auto c:m){
            if(!(v.empty())&& str!=c.first){
                ans.push_back(v);
                v.clear();
            }
            v.push_back(strs[c.second]);
            str=c.first;
        }
        ans.push_back(v);
        return ans;
    }
};