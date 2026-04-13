// Last updated: 4/13/2026, 3:38:15 PM
class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        int num=1;
        vector<bool>arr(n+1);
        for(int i=3;i<n;i+=2){
            if(arr[i]==false){
                num++;
                for(int j=2*i;j<=n;j+=i){
                    arr[j]=true;
                }
            }
        }
        return num;
    }
};