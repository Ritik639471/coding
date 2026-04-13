// Last updated: 4/13/2026, 3:38:29 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int count=0,prev=INT_MIN;
        for(auto c:nums){
            if(count==0){
                count++;
                prev=c;
            }
            else{
                if(prev==c) count++;
                else {count--;}
            }
        }
        return prev;
    }
};