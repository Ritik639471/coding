// Last updated: 4/13/2026, 3:33:32 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        string str;
        int i=0,j=0;
        while(word1[i]!='\0'&&word2[j]!='\0'){
            str.push_back(word1[i]);
            str.push_back(word2[j]);
            i++;j++;
        }
        while(word1[i]!='\0'){
            str.push_back(word1[i]);i++;
        }
        while(word2[j]!='\0'){
            str.push_back(word2[j]);j++;
        }
        return str;
    }
};