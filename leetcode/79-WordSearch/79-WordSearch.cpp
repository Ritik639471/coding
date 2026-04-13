// Last updated: 4/13/2026, 3:40:00 PM
class Solution {
public:
    int helper(vector<vector<char>>& board,string& word,int i,int j,int k,int m,int n,string str,vector<vector<bool>>& check){
        if(k==word.size()){
            return 1;
        }
        int num=0;
        if(str!="D"&&i>0 && board[i-1][j]==word[k]&&check[i-1][j]==true){
            check[i-1][j]=false;
            num+= helper(board,word,i-1,j,k+1,m,n,"U",check);
            check[i-1][j]=true;
        }
        if(str!="U"&&i>-1 && i<m-1 && board[i+1][j]==word[k]&&check[i+1][j]==true){
            check[i+1][j]=false;
            num+= helper(board,word,i+1,j,k+1,m,n,"D",check);
            check[i+1][j]=true;
        }
        if(str!="R"&&j>0 && board[i][j-1]==word[k]&&check[i][j-1]==true){
            check[i][j-1]=false;
            num+= helper(board,word,i,j-1,k+1,m,n,"L",check);
            check[i][j-1]=true;
        }
        if(str!="L"&&j>-1 && j<n-1 && board[i][j+1]==word[k]&&check[i][j+1]==true){
            check[i][j+1]=false;
            num+= helper(board,word,i,j+1,k+1,m,n,"R",check);
            check[i][j+1]=true;
        }
        return num;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        vector<vector<bool>> check(m,vector<bool>(n,true));
        if(word.length()>m*n) return false;
        int flag=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    flag+=helper(board,word,i,j,1,m,n,"",check);
                }
            }
        }
        return flag;
    }
};