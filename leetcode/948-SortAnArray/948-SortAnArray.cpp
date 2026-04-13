// Last updated: 4/13/2026, 3:35:01 PM
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
       multimap<int,bool> m;
       int n=nums.size();
       for(int i=0;i<n;i++){
          m.insert({nums[i],true});
       }
       int i=0;
       for(auto c:m){
         nums[i++]=c.first;
       }
       m.clear();
       return nums;
    }
};