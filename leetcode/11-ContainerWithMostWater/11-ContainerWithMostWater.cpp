// Last updated: 4/13/2026, 3:41:41 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
    int r = height.size() - 1;
    int ans = 0;

    while (l < r) {
        int h = min(height[l], height[r]);
        int width = r - l;
        int area = h * width;

        ans = max(ans, area);

        // move smaller height pointer
        if (height[l] < height[r])
            l++;
        else
            r--;
    }

    return ans;
    }
};