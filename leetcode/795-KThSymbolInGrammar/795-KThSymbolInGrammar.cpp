// Last updated: 4/13/2026, 3:35:29 PM
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){
            return !(kthGrammar(n-1,k/2));
        }
        else{
            return kthGrammar(n-1,k/2+1);
        }
    }
};