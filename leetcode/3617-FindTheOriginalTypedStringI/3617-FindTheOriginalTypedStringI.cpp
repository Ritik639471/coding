// Last updated: 4/13/2026, 3:31:18 PM
class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size();
        int count=1;
        for(int i=0;i<n;i++){
            while(i<n-1&&word[i]==word[i+1]){
                i++;
                count++;
            }
        }
        return count;
    }
};