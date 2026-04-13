// Last updated: 4/13/2026, 3:31:31 PM
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0;
        for(int k=0;k<commands.size();k++){
            int ch=commands[k][0];
            if(ch=='U'){
                i--;
            }
            else if(ch=='D'){
                i++;
            }
            else if(ch=='R'){j++;}
            else{j--;}
        }
        return (i*n)+j;
    }
};