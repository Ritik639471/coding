// Last updated: 4/13/2026, 3:35:12 PM
class Solution {
public:
    static const int hashmulti=60013;
    int hashcord(int x,int y){return x+hashmulti*y;}
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int n1=commands.size(),n2=obstacles.size();
        unordered_set<int> hashset;
        int x=0,y=0;
        int d=0;
        for(int i=0;i<n2;i++){
            hashset.insert(hashcord(obstacles[i][0],obstacles[i][1]));
        }
        vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dis=0;
        for(int i=0;i<n1;i++){
            if(commands[i]==-1){
                d=(d+1)%4;
            }
            else if(commands[i]==-2){
                d=(d+3)%4;
            }
            else{
                int X=dir[d][0],Y=dir[d][1];
                for(int j=0;j<commands[i];j++){
                    int X_=X+x;
                    int Y_=Y+y;
                    if(hashset.contains(hashcord(X_,Y_))){
                        break;
                    }
                    x=X_;
                    y=Y_;
                }
                dis=max(dis,x*x+y*y);
            }
        }
        return dis;
    }
};