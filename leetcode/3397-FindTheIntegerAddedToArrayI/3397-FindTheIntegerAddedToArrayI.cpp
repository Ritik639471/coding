// Last updated: 4/13/2026, 3:32:25 PM
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        return *min_element(nums2.begin(),nums2.end())-*min_element(nums1.begin(),nums1.end());
    }
};