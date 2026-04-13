// Last updated: 4/13/2026, 3:37:14 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        map<int,bool> m;
        int i=0,j=0;
        int n1=nums1.size(),n2=nums2.size();
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]) {m[nums1[i]]=true;i++;j++;}
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        vector<int> v;
        for(auto c:m){
            v.push_back(c.first);
        }
        return v;
    }
};