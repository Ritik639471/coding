// Last updated: 4/13/2026, 3:36:56 PM
class Solution {
public:
    int arrangeCoins(int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return (-1 + sqrt(8 * (uint64_t)n + 1)) / 2;
    }
};