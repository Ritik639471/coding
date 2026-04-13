// Last updated: 4/13/2026, 3:34:08 PM
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        int n=h.size(),a,b;
        stack<int>ab;
        stack<int>ba;
        ab.push(h[n-1]);
        h[n-1]=0;
        for(int i=n-2;i>=0;i--){
            a=h[i];
            h[i]=0;
            while(!(ab.empty())&&ab.top()<a){
               ba.push(ab.top());
               ab.pop();
               h[i]+=1;
            }
            if(!(ab.empty())) h[i]+=1;
            while(!(ba.empty())){
                ab.push(ba.top());
                ba.pop();
            }
            while(!(ab.empty())&&ab.top()<a){ab.pop();            }
            ab.push(a);
        }
        return h;
    }
};