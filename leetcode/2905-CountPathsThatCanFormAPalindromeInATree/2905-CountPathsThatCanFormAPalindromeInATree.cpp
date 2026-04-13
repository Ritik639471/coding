// Last updated: 4/13/2026, 3:32:32 PM
class Solution {
public:
    long long countPalindromePaths(vector<int>& parent, string s) {
        int n = parent.size();
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 1; i < n; i++) {
            adj[parent[i]].push_back({i, s[i] - 'a'});
        }

        // 1. Calculate the mask for every node from root to node i
        vector<int> masks(n, 0);
        stack<pair<int, int>> st;
        st.push({0, 0}); // {node, current_mask}

        while (!st.empty()) {
            auto [u, m] = st.top();
            st.pop();
            masks[u] = m;
            for (auto& edge : adj[u]) {
                st.push({edge.first, m ^ (1 << edge.second)});
            }
        }

        // 2. Use a map to count occurrences of each mask
        unordered_map<int, long long> freq;
        for (int m : masks) freq[m]++;

        long long totalPairs = 0;

        // 3. For each unique mask found, calculate valid palindrome pairs
        for (auto const& [mask, count] : freq) {
            // Case 1: Mask u == Mask v (XOR is 0)
            // Number of pairs is nC2: count * (count - 1) / 2
            totalPairs += count * (count - 1);

            // Case 2: Mask u ^ Mask v == 2^i (One bit difference)
            for (int i = 0; i < 26; i++) {
                int target = mask ^ (1 << i);
                if (freq.count(target)) {
                    totalPairs += count * freq[target];
                }
            }
        }

        // We counted pairs (u, v) and (v, u), so divide by 2
        return totalPairs / 2;
    }
};