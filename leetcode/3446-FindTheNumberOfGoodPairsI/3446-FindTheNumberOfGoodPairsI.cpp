// Last updated: 4/13/2026, 3:32:08 PM
class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {       int num=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                 if(nums1[i]%(nums2[j]*k)==0) num++;
            }
        }
        return num;
    }
};