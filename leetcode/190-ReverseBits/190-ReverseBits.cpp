// Last updated: 4/13/2026, 3:38:24 PM
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t b;
        int count=32;
        while(count>0){
           b=(b<<1);
           b=b+(n&1);
           n>>=1;
           count--;
        }
        return b;
    }
};