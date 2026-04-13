// Last updated: 4/13/2026, 3:32:37 PM
class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> colors(n, 0);
        vector<int> ans;
        int cnt = 0;

        for (auto &q : queries) {
            int i = q[0];
            int c = q[1];

            // remove old contributions
            if (colors[i] != 0) {
                if (i > 0 && colors[i] == colors[i-1]) cnt--;
                if (i < n-1 && colors[i] == colors[i+1]) cnt--;
            }

            colors[i] = c;

            // add new contributions
            if (i > 0 && colors[i] == colors[i-1]) cnt++;
            if (i < n-1 && colors[i] == colors[i+1]) cnt++;

            ans.push_back(cnt);
        }

        return ans;
    }
};