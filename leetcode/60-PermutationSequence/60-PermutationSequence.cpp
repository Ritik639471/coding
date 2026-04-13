// Last updated: 4/13/2026, 3:40:27 PM
class Solution {
public:
void helper(string* ans,string num,int k,int n){
    if(n==1){
        ans->push_back(num[0]);
        return; 
    }
    int fac=1;
    for(int i=2;i<=n-1;i++){
        fac*=i;
    }
    int j=k/fac;
    if(k%fac==0) j--;
    ans->push_back(num[j]);
    int q;
    if(k%fac==0) q=fac;
    else q=k%fac;
    helper(ans,num.substr(0,j)+num.substr(j+1),q,n-1);
}
    string getPermutation(int n, int k) {
        string num;
        for(int i=1;i<=n;i++){
            num.push_back('0'+i);
        }
        string ans;
        helper(&ans,num,k,n);
        return ans;
    }
};