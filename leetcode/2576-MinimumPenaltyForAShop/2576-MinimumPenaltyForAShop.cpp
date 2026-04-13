// Last updated: 4/13/2026, 3:32:44 PM
class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length();
        vector<int> pen(n+1,0);
        int N=0,Y=0;
        for(int i=0;i<n;i++){
            if(customers[n-i-1]=='Y') Y++;
            pen[i]+=N;
            pen[n-i-1]+=Y;
            if(customers[i]=='N') N++;
        }
        pen[n]+=N;
        N=0;
        Y=n;
        for(int i=0;i<=n;i++){
            if(Y>pen[i]) {Y=pen[i];N=i;}
        }
        return N;
    }
};