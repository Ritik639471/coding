// Last updated: 4/13/2026, 3:34:06 PM
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        multimap<int,string> m;
        string str;
        for(int i=0;i<words.size();i++){
            str=words[i];
            sort(str.begin(),str.end());
            m.insert(make_pair(i,str));
        }
        vector<string> v;
        int i=-1;
        str="";
        for(auto c:m){
            if(i==-1 || str!=c.second){
                v.push_back(words[c.first]);
                i++;
                str=c.second;
            }
        }
        return v;
    }
};