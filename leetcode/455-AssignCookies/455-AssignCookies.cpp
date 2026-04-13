// Last updated: 4/13/2026, 3:36:51 PM
static const bool Booster = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n1=g.size();
        int n2=s.size();
        if(n2==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        while(i<n1&&j<n2){
            if(g[i]<=s[j]){
                i++;
            }
            j++;
        }
        return i;
    }
};