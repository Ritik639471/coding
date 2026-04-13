// Last updated: 4/13/2026, 3:32:05 PM
class Solution {
public:
    int numberOfChild(int n, int k) {
        int j=k%(n-1);
        if((k/(n-1))%2) return n-1-j;
        return j;
    }
};