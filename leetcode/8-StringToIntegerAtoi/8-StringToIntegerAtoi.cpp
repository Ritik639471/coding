// Last updated: 4/13/2026, 3:41:43 PM
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long abc=0;
        if (s[i] != '\0') {
            while (s[i] == ' ') {
                i++;
            }
            int sign = 1;
            if (s[i] == '-') {
                sign = -1;
                i++;
            } else if (s[i] == '+')
                i++;
            while (s[i] == '0')
                i++;
            while (s[i] >='0' && s[i] <='9') {
                abc = abc*10 + s[i] -'0';
                if(abc*sign>=INT_MAX)  return INT_MAX;
                if(abc*sign<=INT_MIN)  return INT_MIN;
                i++;
            }
            return abc*sign;
        }
        return 0;
    }
};