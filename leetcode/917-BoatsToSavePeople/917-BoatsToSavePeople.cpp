// Last updated: 4/13/2026, 3:35:08 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int j=people.size()-1,i=0,ans=0;
        while(i<=j){
            if(i==j||people[i]+people[j]>limit){
                ans++;
                j--;
            }
            else{
                ans++;
                i++;
                j--;
            }
        }
        return ans;
    }
};