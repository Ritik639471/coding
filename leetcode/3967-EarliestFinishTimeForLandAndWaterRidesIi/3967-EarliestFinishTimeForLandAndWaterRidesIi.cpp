// Last updated: 4/13/2026, 3:31:02 PM
class Solution {
public:
    int earliestFinishTime(vector<int>& lt, vector<int>& ld, vector<int>& wt, vector<int>& wd) {
        int n = lt.size(), m = wt.size();
        int ans = INT_MAX;
        vector<pair<int, int>> l(n), w(m);
        for (int i = 0; i < n; i++) l[i] = {lt[i], ld[i]};
        for (int i = 0; i < m; i++) w[i] = {wt[i], wd[i]};
        sort(l.begin(), l.end());
        sort(w.begin(), w.end());
        vector<int> w_pref(m);
        vector<int> w_finish(m);
        for (int i = 0; i < m; i++) w_finish[i] = w[i].first + w[i].second;
        w_pref[0] = w[0].second;
        for (int i = 1; i < m; i++) w_pref[i] = min(w_pref[i - 1], w[i].second);
        for (int i = m - 2; i >= 0; i--) w_finish[i] = min(w_finish[i], w_finish[i + 1]);

        vector<int> l_pref(n);
        vector<int> l_finish(n);
        for (int i = 0; i < n; i++) l_finish[i] = l[i].first + l[i].second;
        l_pref[0] = l[0].second;
        for (int i = 1; i < n; i++) l_pref[i] = min(l_pref[i - 1], l[i].second);
        for (int i = n - 2; i >= 0; i--) l_finish[i] = min(l_finish[i], l_finish[i + 1]);
        for (auto c : l) {
            int endTime = c.first + c.second;
            auto it = lower_bound(w.begin(), w.end(), make_pair(endTime, 0));
            int idx = it - w.begin();
            if (idx < m) ans = min(ans, w_finish[idx]);
            if (idx > 0) ans = min(ans, endTime + w_pref[idx - 1]);
        }
        for (auto c : w) {
            int endTime = c.first + c.second;
            auto it = lower_bound(l.begin(), l.end(), make_pair(endTime, 0));
            int idx = it - l.begin();
            if (idx < n) ans = min(ans, l_finish[idx]);
            if (idx > 0) ans = min(ans, endTime + l_pref[idx - 1]);
        }

        return (ans == INT_MAX ? -1 : ans);
    }
};
