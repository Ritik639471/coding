// Last updated: 4/13/2026, 3:38:01 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1||k==0) return false;
        unordered_multimap<int,int> m;
        for(int i=0;i<n;i++){
            m.insert({nums[i],i});
        }
        int prevval=-1,prev=-1;
        for(auto c: m){
            if(prev!=-1&&prevval==c.first){
                if(abs(c.second-prev)<=k) return true;

            }
            prev=c.second;
            prevval=c.first;
        }
        return false;
    }
};