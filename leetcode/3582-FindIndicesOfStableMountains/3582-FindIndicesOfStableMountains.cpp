// Last updated: 4/13/2026, 3:31:21 PM
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int n=height.size(),count=0;
        vector<int> ans;
        for(int i=1;i<n;i++){if(height[i-1]>threshold) ans.push_back(i);}
        return ans;
    }
};