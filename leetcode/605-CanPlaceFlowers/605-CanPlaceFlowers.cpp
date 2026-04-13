// Last updated: 4/13/2026, 3:36:23 PM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int n1=flowerbed.size();
        if(n1==1&&flowerbed[0]==0) return true;
        int zero=0,one=-1;
        for(int i=0;i<n1;i++){
            if(flowerbed[i]==1){
                one=i;
                zero=0;
            }
            else{
                zero+=1;
                if(zero==3) {zero=1;n--;}
            }
            if((i==1||i==n1-1 ) && zero==2 && flowerbed[i]==0){
                 n--;zero=1;
            }
        }
        cout<<n<<endl;
        return n<=0;
    }
};