// Last updated: 4/13/2026, 3:32:07 PM
class Solution {
public:
    string clearDigits(string s) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};