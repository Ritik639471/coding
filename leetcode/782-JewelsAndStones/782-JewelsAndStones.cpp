// Last updated: 4/13/2026, 3:35:36 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,bool> m;
        for(char c:jewels){
            m[c]=true;
        }
        int count=0;
        for(char c:stones){
           count+= m[c];
        }
        return count;
    }
};