// Last updated: 4/13/2026, 3:41:35 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=min(strs[0].size(),strs[strs.size()-1].size());
        char c;
        string s;
        int i=0;
        while(i<n&&strs[0][i]==strs[strs.size()-1][i]){ c=strs[0][i];s.push_back(c);i++;}
        return s;
    }
};