// Last updated: 4/13/2026, 3:33:29 PM
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negve=0;
        for(int c: nums){
            if(c<0) negve++;
            if(c==0) return 0;
        }
        if(negve%2)return -1;
        else return 1;
    }
};