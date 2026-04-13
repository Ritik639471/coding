// Last updated: 4/13/2026, 3:31:45 PM
class Solution {
public:
    string losingPlayer(int x, int y) {
        y/=4;
        if(y<x) x=y;
        if(x%2==1) return "Alice";
        else return "Bob";
    }
};