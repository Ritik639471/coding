// Last updated: 4/13/2026, 3:32:23 PM
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.length(),num=0;
        for(int i=0;i<n;i++){
            int j=t.find(s[i]);
            num+=abs(j-i);
        }
        return num;
    }
};