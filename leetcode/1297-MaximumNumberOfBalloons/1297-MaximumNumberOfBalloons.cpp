// Last updated: 4/13/2026, 3:34:11 PM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        if(text.length()<7) return 0;
        unordered_map<char,int> m;
        for(char c: text){
            if(c=='b'||c=='a'||c=='l'||c=='o'||c=='n'){
                m[c]++;
            }
        }
        int min=INT_MAX;
        m['l']=m['l']/2;
        m['o']=m['o']/2;
        for(auto c:m){
            if(min>c.second) min=c.second;
        }
        return min;
    }
};