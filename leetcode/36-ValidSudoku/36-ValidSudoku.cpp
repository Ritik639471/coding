// Last updated: 4/13/2026, 3:41:02 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<char,bool> m;
            unordered_map<char,bool> m1;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                if(m.find(board[i][j])!=m.end()) {return false;}
                else m[board[i][j]]=true;}
                if(board[j][i]!='.')
                if(m1.find(board[j][i])!=m1.end()){return false;}
                else m1[board[j][i]]=true;
            }
        }
        for(int i=0;i<3;i++){
            unordered_map<char,bool> m1;
            unordered_map<char,bool> m2;
            unordered_map<char,bool> m3;
            for(int j=3*i;j<3*i+3;j++){
                for(int k=0;k<3;k++){
                    if(board[j][k]!='.'){
                        if(m1.find(board[j][k])!=m1.end()) {return false;}
                        else m1[board[j][k]]=true;}
                    if(board[j][k+3]!='.'){
                        if(m2.find(board[j][k+3])!=m2.end()) {return false;}
                        else m2[board[j][k+3]]=true;}
                    if(board[j][k+6]!='.'){
                        if(m3.find(board[j][k+6])!=m3.end()) {return false;}
                        else m3[board[j][k+6]]=true;}
                }
            }
        }
        return true;
    }
};