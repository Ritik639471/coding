// Last updated: 4/13/2026, 3:35:45 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters[0]>target) return letters[0];
        int n=letters.size();
        if(letters[n-1]<=target) return letters[0];
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(letters[mid]==target){
                while(letters[mid]<=target) mid++;
                return letters[mid];
            }
            else if(letters[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        while(letters[lo]<=target) lo++;
        return letters[lo];
    }
};