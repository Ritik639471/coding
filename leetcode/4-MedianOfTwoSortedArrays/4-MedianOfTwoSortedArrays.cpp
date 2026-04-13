// Last updated: 4/13/2026, 3:41:55 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        if (n == 0 && m % 2 == 0)
            return ((double)(nums2[m / 2 - 1] + nums2[m / 2])) / 2;
        else if (n == 0 && m % 2 == 1)
            return ((double)nums2[m / 2]);
        if (m == 0 && n % 2 == 0)
            return ((double)(nums1[n / 2 - 1] + nums1[n / 2])) / 2;
        else if (m == 0 && n % 2 == 1)
            return ((double)nums1[n / 2]);
        int i = 0, j = 0, k = 0;
        if ((m + n) % 2 == 1) {
            while (i + j <= (m + n) / 2) {
                if (i < n && j < m && nums1[i] <= nums2[j])
                    k = nums1[i++];
                else if (i < n && j < m && nums1[i] > nums2[j])
                    k = nums2[j++];
                else if (i == n && j < m)
                    k = nums2[j++];
                else if (j == m && i < n)
                    k = nums1[i++];
            }
            return (double)k;
        } else {
            while (i + j < (m + n) / 2) {
                if (i < n && j < m && nums1[i] <= nums2[j])
                    k = nums1[i++];
                else if (i < n && j < m && nums1[i] > nums2[j])
                    k = nums2[j++];
                else if (i == n && j < m)
                    k = nums2[j++];
                else if (j == m && i < n)
                    k = nums1[i++];
            }
            if (i < n && j < m && nums1[i] <= nums2[j])
                k += nums1[i++];
            else if (i < n && j < m && nums1[i] > nums2[j])
                k += nums2[j++];
            else if (i == n && j < m)
                k += nums2[j++];
            else if (j == m && i < n)
                k += nums1[i++];
            return ((double)k) / 2;
        }
        return 0;
    }
};