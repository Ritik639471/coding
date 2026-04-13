// Last updated: 4/13/2026, 3:32:04 PM
class Solution {
public:
    string compressedString(string word) {
        string s;
        char c='0';
        int num=0;
        for(int i=0;i<word.length();i++){
            c=word[i];
            num=1;
            while(i<(word.length()-1)&&c==word[i+1]&&num<9){
                num++;
                i++;
            }
            s.push_back((char)('0'+num));
            s.push_back(c);
        }
        return s;
    }
};