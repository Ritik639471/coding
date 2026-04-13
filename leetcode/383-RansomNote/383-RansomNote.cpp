// Last updated: 4/13/2026, 3:37:04 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> m;
        if(ransomNote.size()>magazine.size()) return false;
        for(char c: magazine){
            m[c]++;
        }
        for(char c: ransomNote){
            if(m.find(c)==m.end()){
                return false;
            }
            else if(m[c]==0) return false;
            else m[c]--;
        }
        return true;
    }
};