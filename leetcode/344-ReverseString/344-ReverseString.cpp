// Last updated: 4/13/2026, 3:37:16 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0,high=s.size()-1;
        char str;
        while(low<high){
            swap(s[low],s[high]);
            low++;
            high--;
        }
    }
};