// Last updated: 4/13/2026, 3:33:24 PM
class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.length(),sum=0,num=0;
        for(int i=0;i<n;i++){
            num=s[i]-'a'+1;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
        }
        k-=1;
        while(k>0){
            num=sum;
            sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            k--;
        }
        return sum;
    }
};