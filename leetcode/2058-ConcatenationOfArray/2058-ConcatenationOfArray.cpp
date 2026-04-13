// Last updated: 4/13/2026, 3:33:26 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         vector<int> ans;
        for(int num: nums) {
            ans.push_back(num);
        }

        for(int num: nums) {
            ans.push_back(num);
        }

        return ans;
    }
};