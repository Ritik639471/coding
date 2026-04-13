// Last updated: 4/13/2026, 3:33:06 PM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        start=start^goal;
        return  __builtin_popcount(start);
    }
};